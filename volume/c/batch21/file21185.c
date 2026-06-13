// fichero 21185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21185;

Registro21185 crear_registro21185(int id) {
    Registro21185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21185(Registro21185 r) {
    return r.valor + r.id;
}
