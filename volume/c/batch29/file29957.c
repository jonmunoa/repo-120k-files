// fichero 29957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29957;

Registro29957 crear_registro29957(int id) {
    Registro29957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29957(Registro29957 r) {
    return r.valor + r.id;
}
