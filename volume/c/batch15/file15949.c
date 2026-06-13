// fichero 15949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15949;

Registro15949 crear_registro15949(int id) {
    Registro15949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15949(Registro15949 r) {
    return r.valor + r.id;
}
