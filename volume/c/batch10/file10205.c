// fichero 10205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10205;

Registro10205 crear_registro10205(int id) {
    Registro10205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10205(Registro10205 r) {
    return r.valor + r.id;
}
