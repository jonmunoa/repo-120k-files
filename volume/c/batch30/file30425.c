// fichero 30425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30425;

Registro30425 crear_registro30425(int id) {
    Registro30425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30425(Registro30425 r) {
    return r.valor + r.id;
}
