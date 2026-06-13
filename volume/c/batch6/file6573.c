// fichero 6573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6573;

Registro6573 crear_registro6573(int id) {
    Registro6573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6573(Registro6573 r) {
    return r.valor + r.id;
}
