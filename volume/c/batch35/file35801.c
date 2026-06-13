// fichero 35801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35801;

Registro35801 crear_registro35801(int id) {
    Registro35801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35801(Registro35801 r) {
    return r.valor + r.id;
}
