// fichero 44645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44645;

Registro44645 crear_registro44645(int id) {
    Registro44645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44645(Registro44645 r) {
    return r.valor + r.id;
}
