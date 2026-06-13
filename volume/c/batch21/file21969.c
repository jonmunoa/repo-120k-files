// fichero 21969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21969;

Registro21969 crear_registro21969(int id) {
    Registro21969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21969(Registro21969 r) {
    return r.valor + r.id;
}
