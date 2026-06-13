// fichero 12557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12557;

Registro12557 crear_registro12557(int id) {
    Registro12557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12557(Registro12557 r) {
    return r.valor + r.id;
}
