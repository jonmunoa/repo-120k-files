// fichero 12725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12725;

Registro12725 crear_registro12725(int id) {
    Registro12725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12725(Registro12725 r) {
    return r.valor + r.id;
}
