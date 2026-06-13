// fichero 5909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5909;

Registro5909 crear_registro5909(int id) {
    Registro5909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5909(Registro5909 r) {
    return r.valor + r.id;
}
