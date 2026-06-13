// fichero 49961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49961;

Registro49961 crear_registro49961(int id) {
    Registro49961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49961(Registro49961 r) {
    return r.valor + r.id;
}
