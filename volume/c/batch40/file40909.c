// fichero 40909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40909;

Registro40909 crear_registro40909(int id) {
    Registro40909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40909(Registro40909 r) {
    return r.valor + r.id;
}
