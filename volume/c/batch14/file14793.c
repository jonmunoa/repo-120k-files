// fichero 14793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14793;

Registro14793 crear_registro14793(int id) {
    Registro14793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14793(Registro14793 r) {
    return r.valor + r.id;
}
