// fichero 19797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19797;

Registro19797 crear_registro19797(int id) {
    Registro19797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19797(Registro19797 r) {
    return r.valor + r.id;
}
