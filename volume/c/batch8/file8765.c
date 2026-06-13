// fichero 8765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8765;

Registro8765 crear_registro8765(int id) {
    Registro8765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8765(Registro8765 r) {
    return r.valor + r.id;
}
