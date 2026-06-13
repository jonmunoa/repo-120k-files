// fichero 12029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12029;

Registro12029 crear_registro12029(int id) {
    Registro12029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12029(Registro12029 r) {
    return r.valor + r.id;
}
