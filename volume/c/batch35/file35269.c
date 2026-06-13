// fichero 35269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35269;

Registro35269 crear_registro35269(int id) {
    Registro35269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35269(Registro35269 r) {
    return r.valor + r.id;
}
