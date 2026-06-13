// fichero 44553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44553;

Registro44553 crear_registro44553(int id) {
    Registro44553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44553(Registro44553 r) {
    return r.valor + r.id;
}
