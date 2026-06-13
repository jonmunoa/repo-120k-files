// fichero 10753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10753;

Registro10753 crear_registro10753(int id) {
    Registro10753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10753(Registro10753 r) {
    return r.valor + r.id;
}
