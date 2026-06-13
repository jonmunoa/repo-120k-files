// fichero 21521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21521;

Registro21521 crear_registro21521(int id) {
    Registro21521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21521(Registro21521 r) {
    return r.valor + r.id;
}
