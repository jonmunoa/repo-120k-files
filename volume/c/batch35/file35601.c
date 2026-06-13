// fichero 35601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35601;

Registro35601 crear_registro35601(int id) {
    Registro35601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35601(Registro35601 r) {
    return r.valor + r.id;
}
