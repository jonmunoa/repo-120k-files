// fichero 27857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27857;

Registro27857 crear_registro27857(int id) {
    Registro27857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27857(Registro27857 r) {
    return r.valor + r.id;
}
