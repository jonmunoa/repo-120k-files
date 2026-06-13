// fichero 12333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12333;

Registro12333 crear_registro12333(int id) {
    Registro12333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12333(Registro12333 r) {
    return r.valor + r.id;
}
