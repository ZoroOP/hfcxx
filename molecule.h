/*
 * molecule.h
 *
 * Author: Ivo Filot
 *
 */

#ifndef _MOLECULE_H
#define _MOLECULE_H

#include<string>
#include<vector>
#include "atom.h"
#include "basis.h"
#include "strfunc.h"

class Molecule{
	private:
	std::vector<Atom> atoms;
	unsigned int nrat;
	Basis basis;

	public:
	Molecule(); /* default constructor */
	void read(std::string file); /* read molecule from file */
	void addAtom(const Atom &at);
	void addAtom(const std::string symbolin, const double xx, const double yy, const double zz);
	void addAtom(const unsigned int Zz, const double xx, const double yy, const double zz);
	friend std::ostream & operator << (std::ostream &os, const Molecule &rhs);
	const unsigned int nratoms() const;
	const Atom& operator[](const unsigned int i) const;
};

#endif //_MOLECULE_H
