// fichero 7185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7185;

Registro7185 crear_registro7185(int id) {
    Registro7185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7185(Registro7185 r) {
    return r.valor + r.id;
}
