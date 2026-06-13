// fichero 3397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3397;

Registro3397 crear_registro3397(int id) {
    Registro3397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3397(Registro3397 r) {
    return r.valor + r.id;
}
