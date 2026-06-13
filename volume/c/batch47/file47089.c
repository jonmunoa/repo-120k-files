// fichero 47089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47089;

Registro47089 crear_registro47089(int id) {
    Registro47089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47089(Registro47089 r) {
    return r.valor + r.id;
}
