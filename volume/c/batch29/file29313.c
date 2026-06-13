// fichero 29313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29313;

Registro29313 crear_registro29313(int id) {
    Registro29313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29313(Registro29313 r) {
    return r.valor + r.id;
}
