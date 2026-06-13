// fichero 48957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48957;

Registro48957 crear_registro48957(int id) {
    Registro48957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48957(Registro48957 r) {
    return r.valor + r.id;
}
