// fichero 38713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38713;

Registro38713 crear_registro38713(int id) {
    Registro38713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38713(Registro38713 r) {
    return r.valor + r.id;
}
