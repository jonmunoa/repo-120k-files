// fichero 10225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10225;

Registro10225 crear_registro10225(int id) {
    Registro10225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10225(Registro10225 r) {
    return r.valor + r.id;
}
