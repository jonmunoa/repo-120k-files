// fichero 35397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35397;

Registro35397 crear_registro35397(int id) {
    Registro35397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35397(Registro35397 r) {
    return r.valor + r.id;
}
