// fichero 9329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9329;

Registro9329 crear_registro9329(int id) {
    Registro9329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9329(Registro9329 r) {
    return r.valor + r.id;
}
