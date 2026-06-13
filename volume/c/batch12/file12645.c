// fichero 12645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12645;

Registro12645 crear_registro12645(int id) {
    Registro12645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12645(Registro12645 r) {
    return r.valor + r.id;
}
