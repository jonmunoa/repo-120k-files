// fichero 21005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21005;

Registro21005 crear_registro21005(int id) {
    Registro21005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21005(Registro21005 r) {
    return r.valor + r.id;
}
