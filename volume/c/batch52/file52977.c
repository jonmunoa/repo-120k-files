// fichero 52977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52977;

Registro52977 crear_registro52977(int id) {
    Registro52977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52977(Registro52977 r) {
    return r.valor + r.id;
}
