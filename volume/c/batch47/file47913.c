// fichero 47913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47913;

Registro47913 crear_registro47913(int id) {
    Registro47913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47913(Registro47913 r) {
    return r.valor + r.id;
}
