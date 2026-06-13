// fichero 38193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38193;

Registro38193 crear_registro38193(int id) {
    Registro38193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38193(Registro38193 r) {
    return r.valor + r.id;
}
