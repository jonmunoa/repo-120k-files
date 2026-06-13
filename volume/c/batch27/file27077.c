// fichero 27077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27077;

Registro27077 crear_registro27077(int id) {
    Registro27077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27077(Registro27077 r) {
    return r.valor + r.id;
}
