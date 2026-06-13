// fichero 5369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5369;

Registro5369 crear_registro5369(int id) {
    Registro5369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5369(Registro5369 r) {
    return r.valor + r.id;
}
