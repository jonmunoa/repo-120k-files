// fichero 49037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49037;

Registro49037 crear_registro49037(int id) {
    Registro49037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49037(Registro49037 r) {
    return r.valor + r.id;
}
