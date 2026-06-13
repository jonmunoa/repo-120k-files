// fichero 27261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27261;

Registro27261 crear_registro27261(int id) {
    Registro27261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27261(Registro27261 r) {
    return r.valor + r.id;
}
