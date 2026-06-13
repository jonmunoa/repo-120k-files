// fichero 35961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35961;

Registro35961 crear_registro35961(int id) {
    Registro35961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35961(Registro35961 r) {
    return r.valor + r.id;
}
