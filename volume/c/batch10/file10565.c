// fichero 10565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10565;

Registro10565 crear_registro10565(int id) {
    Registro10565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10565(Registro10565 r) {
    return r.valor + r.id;
}
