//
// THIS FILE HAS BEEN GENERATED AUTOMATICALLY
// DO NOT CHANGE IT MANUALLY UNLESS YOU KNOW WHAT YOU'RE DOING
//
// GENERATED USING @colyseus/schema 0.5.34
//
#ifndef __SCHEMA_CODEGEN_STATE_H__
#define __SCHEMA_CODEGEN_STATE_H__ 1

#include "schema.h"
#include <typeinfo>
#include <typeindex>

#include "Player.hpp"

using namespace colyseus::schema;


class State : public Schema {
public:
	 MapSchema<Player*> *players = new MapSchema<Player*>();

	State() {
		this->_indexes = {{0, "players"}};
		this->_types = {{0, "map"}};
		this->_childPrimitiveTypes = {};
		this->_childSchemaTypes = {{0, typeid(Player)}};
	}

	virtual ~State() {
		delete this->players;
	}

protected:
	inline MapSchema<char*> * getMap(const string &field)
	{
		if (field == "players")
		{
			return (MapSchema<char*> *)this->players;

		}
		return Schema::getMap(field);
	}

	inline void setMap(const string &field, MapSchema<char*> * value)
	{
		if (field == "players")
		{
			this->players = (MapSchema<Player*> *)value;
			return;

		}
		return Schema::setMap(field, value);
	}

	inline Schema* createInstance(std::type_index type) {
		if (type == typeid(Player))
		{
			return new Player();

		}
		return Schema::createInstance(type);
	}
};


#endif
