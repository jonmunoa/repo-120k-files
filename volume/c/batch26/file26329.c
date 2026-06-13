// fichero 26329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26329;

Registro26329 crear_registro26329(int id) {
    Registro26329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26329(Registro26329 r) {
    return r.valor + r.id;
}
