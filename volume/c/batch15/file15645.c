// fichero 15645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15645;

Registro15645 crear_registro15645(int id) {
    Registro15645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15645(Registro15645 r) {
    return r.valor + r.id;
}
