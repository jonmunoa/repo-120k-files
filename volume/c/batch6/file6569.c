// fichero 6569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6569;

Registro6569 crear_registro6569(int id) {
    Registro6569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6569(Registro6569 r) {
    return r.valor + r.id;
}
