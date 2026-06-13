// fichero 49821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49821;

Registro49821 crear_registro49821(int id) {
    Registro49821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49821(Registro49821 r) {
    return r.valor + r.id;
}
