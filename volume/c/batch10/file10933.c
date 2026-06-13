// fichero 10933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10933;

Registro10933 crear_registro10933(int id) {
    Registro10933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10933(Registro10933 r) {
    return r.valor + r.id;
}
