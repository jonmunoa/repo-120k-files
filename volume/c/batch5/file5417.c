// fichero 5417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5417;

Registro5417 crear_registro5417(int id) {
    Registro5417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5417(Registro5417 r) {
    return r.valor + r.id;
}
