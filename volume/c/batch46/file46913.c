// fichero 46913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46913;

Registro46913 crear_registro46913(int id) {
    Registro46913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46913(Registro46913 r) {
    return r.valor + r.id;
}
