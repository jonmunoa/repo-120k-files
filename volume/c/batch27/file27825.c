// fichero 27825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27825;

Registro27825 crear_registro27825(int id) {
    Registro27825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27825(Registro27825 r) {
    return r.valor + r.id;
}
