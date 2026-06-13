// fichero 425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro425;

Registro425 crear_registro425(int id) {
    Registro425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro425(Registro425 r) {
    return r.valor + r.id;
}
