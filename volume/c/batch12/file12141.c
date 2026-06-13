// fichero 12141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12141;

Registro12141 crear_registro12141(int id) {
    Registro12141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12141(Registro12141 r) {
    return r.valor + r.id;
}
