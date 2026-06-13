// fichero 45765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45765;

Registro45765 crear_registro45765(int id) {
    Registro45765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45765(Registro45765 r) {
    return r.valor + r.id;
}
