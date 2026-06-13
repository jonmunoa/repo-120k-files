// fichero 945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro945;

Registro945 crear_registro945(int id) {
    Registro945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro945(Registro945 r) {
    return r.valor + r.id;
}
