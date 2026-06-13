// fichero 38649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38649;

Registro38649 crear_registro38649(int id) {
    Registro38649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38649(Registro38649 r) {
    return r.valor + r.id;
}
