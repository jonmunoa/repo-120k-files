// fichero 5945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5945;

Registro5945 crear_registro5945(int id) {
    Registro5945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5945(Registro5945 r) {
    return r.valor + r.id;
}
