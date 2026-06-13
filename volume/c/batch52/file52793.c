// fichero 52793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52793;

Registro52793 crear_registro52793(int id) {
    Registro52793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52793(Registro52793 r) {
    return r.valor + r.id;
}
