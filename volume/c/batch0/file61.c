// fichero 61 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro61;

Registro61 crear_registro61(int id) {
    Registro61 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro61(Registro61 r) {
    return r.valor + r.id;
}
