// fichero 47009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47009;

Registro47009 crear_registro47009(int id) {
    Registro47009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47009(Registro47009 r) {
    return r.valor + r.id;
}
