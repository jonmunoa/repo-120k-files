// fichero 10577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10577;

Registro10577 crear_registro10577(int id) {
    Registro10577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10577(Registro10577 r) {
    return r.valor + r.id;
}
