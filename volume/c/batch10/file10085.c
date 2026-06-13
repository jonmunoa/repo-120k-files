// fichero 10085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10085;

Registro10085 crear_registro10085(int id) {
    Registro10085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10085(Registro10085 r) {
    return r.valor + r.id;
}
