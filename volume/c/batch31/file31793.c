// fichero 31793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31793;

Registro31793 crear_registro31793(int id) {
    Registro31793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31793(Registro31793 r) {
    return r.valor + r.id;
}
