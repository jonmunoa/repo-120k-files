// fichero 845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro845;

Registro845 crear_registro845(int id) {
    Registro845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro845(Registro845 r) {
    return r.valor + r.id;
}
