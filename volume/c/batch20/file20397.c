// fichero 20397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20397;

Registro20397 crear_registro20397(int id) {
    Registro20397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20397(Registro20397 r) {
    return r.valor + r.id;
}
