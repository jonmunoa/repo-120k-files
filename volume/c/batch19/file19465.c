// fichero 19465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19465;

Registro19465 crear_registro19465(int id) {
    Registro19465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19465(Registro19465 r) {
    return r.valor + r.id;
}
