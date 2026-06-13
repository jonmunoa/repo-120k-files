// fichero 27453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27453;

Registro27453 crear_registro27453(int id) {
    Registro27453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27453(Registro27453 r) {
    return r.valor + r.id;
}
