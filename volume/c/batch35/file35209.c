// fichero 35209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35209;

Registro35209 crear_registro35209(int id) {
    Registro35209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35209(Registro35209 r) {
    return r.valor + r.id;
}
