// fichero 39913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39913;

Registro39913 crear_registro39913(int id) {
    Registro39913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39913(Registro39913 r) {
    return r.valor + r.id;
}
