// fichero 369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro369;

Registro369 crear_registro369(int id) {
    Registro369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro369(Registro369 r) {
    return r.valor + r.id;
}
