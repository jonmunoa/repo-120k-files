// fichero 31637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31637;

Registro31637 crear_registro31637(int id) {
    Registro31637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31637(Registro31637 r) {
    return r.valor + r.id;
}
