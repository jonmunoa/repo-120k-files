// fichero 12253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12253;

Registro12253 crear_registro12253(int id) {
    Registro12253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12253(Registro12253 r) {
    return r.valor + r.id;
}
