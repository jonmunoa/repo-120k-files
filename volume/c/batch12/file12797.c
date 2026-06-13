// fichero 12797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12797;

Registro12797 crear_registro12797(int id) {
    Registro12797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12797(Registro12797 r) {
    return r.valor + r.id;
}
