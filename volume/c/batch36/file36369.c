// fichero 36369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36369;

Registro36369 crear_registro36369(int id) {
    Registro36369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36369(Registro36369 r) {
    return r.valor + r.id;
}
