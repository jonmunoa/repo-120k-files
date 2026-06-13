// fichero 27957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27957;

Registro27957 crear_registro27957(int id) {
    Registro27957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27957(Registro27957 r) {
    return r.valor + r.id;
}
