// fichero 12369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12369;

Registro12369 crear_registro12369(int id) {
    Registro12369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12369(Registro12369 r) {
    return r.valor + r.id;
}
