// fichero 10001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10001;

Registro10001 crear_registro10001(int id) {
    Registro10001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10001(Registro10001 r) {
    return r.valor + r.id;
}
