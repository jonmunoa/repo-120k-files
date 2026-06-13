// fichero 10241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10241;

Registro10241 crear_registro10241(int id) {
    Registro10241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10241(Registro10241 r) {
    return r.valor + r.id;
}
