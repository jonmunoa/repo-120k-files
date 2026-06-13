// fichero 12357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12357;

Registro12357 crear_registro12357(int id) {
    Registro12357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12357(Registro12357 r) {
    return r.valor + r.id;
}
