// fichero 21345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21345;

Registro21345 crear_registro21345(int id) {
    Registro21345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21345(Registro21345 r) {
    return r.valor + r.id;
}
