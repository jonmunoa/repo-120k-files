// fichero 5913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5913;

Registro5913 crear_registro5913(int id) {
    Registro5913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5913(Registro5913 r) {
    return r.valor + r.id;
}
