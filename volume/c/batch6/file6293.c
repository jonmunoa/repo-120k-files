// fichero 6293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6293;

Registro6293 crear_registro6293(int id) {
    Registro6293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6293(Registro6293 r) {
    return r.valor + r.id;
}
