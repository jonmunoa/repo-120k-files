// fichero 10153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10153;

Registro10153 crear_registro10153(int id) {
    Registro10153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10153(Registro10153 r) {
    return r.valor + r.id;
}
