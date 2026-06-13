// fichero 20117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20117;

Registro20117 crear_registro20117(int id) {
    Registro20117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20117(Registro20117 r) {
    return r.valor + r.id;
}
