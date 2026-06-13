// fichero 12225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12225;

Registro12225 crear_registro12225(int id) {
    Registro12225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12225(Registro12225 r) {
    return r.valor + r.id;
}
