// fichero 49057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49057;

Registro49057 crear_registro49057(int id) {
    Registro49057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49057(Registro49057 r) {
    return r.valor + r.id;
}
