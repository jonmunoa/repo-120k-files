// fichero 10049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10049;

Registro10049 crear_registro10049(int id) {
    Registro10049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10049(Registro10049 r) {
    return r.valor + r.id;
}
