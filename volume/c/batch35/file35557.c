// fichero 35557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35557;

Registro35557 crear_registro35557(int id) {
    Registro35557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35557(Registro35557 r) {
    return r.valor + r.id;
}
