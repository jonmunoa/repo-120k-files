// fichero 10301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10301;

Registro10301 crear_registro10301(int id) {
    Registro10301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10301(Registro10301 r) {
    return r.valor + r.id;
}
