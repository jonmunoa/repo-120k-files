// fichero 8793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8793;

Registro8793 crear_registro8793(int id) {
    Registro8793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8793(Registro8793 r) {
    return r.valor + r.id;
}
