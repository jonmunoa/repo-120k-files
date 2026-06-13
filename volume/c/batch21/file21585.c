// fichero 21585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21585;

Registro21585 crear_registro21585(int id) {
    Registro21585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21585(Registro21585 r) {
    return r.valor + r.id;
}
