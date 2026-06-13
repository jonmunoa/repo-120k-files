// fichero 35821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35821;

Registro35821 crear_registro35821(int id) {
    Registro35821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35821(Registro35821 r) {
    return r.valor + r.id;
}
