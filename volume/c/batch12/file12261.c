// fichero 12261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12261;

Registro12261 crear_registro12261(int id) {
    Registro12261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12261(Registro12261 r) {
    return r.valor + r.id;
}
