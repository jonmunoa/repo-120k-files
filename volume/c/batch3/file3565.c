// fichero 3565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3565;

Registro3565 crear_registro3565(int id) {
    Registro3565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3565(Registro3565 r) {
    return r.valor + r.id;
}
