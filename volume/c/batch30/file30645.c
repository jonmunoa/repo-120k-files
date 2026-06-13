// fichero 30645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30645;

Registro30645 crear_registro30645(int id) {
    Registro30645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30645(Registro30645 r) {
    return r.valor + r.id;
}
