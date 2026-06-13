// fichero 27821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27821;

Registro27821 crear_registro27821(int id) {
    Registro27821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27821(Registro27821 r) {
    return r.valor + r.id;
}
