// fichero 29417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29417;

Registro29417 crear_registro29417(int id) {
    Registro29417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29417(Registro29417 r) {
    return r.valor + r.id;
}
