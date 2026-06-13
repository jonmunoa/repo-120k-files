// fichero 1637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1637;

Registro1637 crear_registro1637(int id) {
    Registro1637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1637(Registro1637 r) {
    return r.valor + r.id;
}
