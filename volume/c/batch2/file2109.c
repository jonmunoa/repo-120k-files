// fichero 2109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2109;

Registro2109 crear_registro2109(int id) {
    Registro2109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2109(Registro2109 r) {
    return r.valor + r.id;
}
