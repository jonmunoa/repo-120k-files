// fichero 30737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30737;

Registro30737 crear_registro30737(int id) {
    Registro30737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30737(Registro30737 r) {
    return r.valor + r.id;
}
