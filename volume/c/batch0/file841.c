// fichero 841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro841;

Registro841 crear_registro841(int id) {
    Registro841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro841(Registro841 r) {
    return r.valor + r.id;
}
