// fichero 15737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15737;

Registro15737 crear_registro15737(int id) {
    Registro15737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15737(Registro15737 r) {
    return r.valor + r.id;
}
