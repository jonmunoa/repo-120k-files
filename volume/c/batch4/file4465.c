// fichero 4465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4465;

Registro4465 crear_registro4465(int id) {
    Registro4465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4465(Registro4465 r) {
    return r.valor + r.id;
}
