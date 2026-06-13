// fichero 27893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27893;

Registro27893 crear_registro27893(int id) {
    Registro27893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27893(Registro27893 r) {
    return r.valor + r.id;
}
