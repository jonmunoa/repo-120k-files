// fichero 10365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10365;

Registro10365 crear_registro10365(int id) {
    Registro10365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10365(Registro10365 r) {
    return r.valor + r.id;
}
