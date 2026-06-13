// fichero 27369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27369;

Registro27369 crear_registro27369(int id) {
    Registro27369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27369(Registro27369 r) {
    return r.valor + r.id;
}
