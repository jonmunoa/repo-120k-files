// fichero 20077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20077;

Registro20077 crear_registro20077(int id) {
    Registro20077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20077(Registro20077 r) {
    return r.valor + r.id;
}
