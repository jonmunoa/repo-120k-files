// fichero 53793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53793;

Registro53793 crear_registro53793(int id) {
    Registro53793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53793(Registro53793 r) {
    return r.valor + r.id;
}
