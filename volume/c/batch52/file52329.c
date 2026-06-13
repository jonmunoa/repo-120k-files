// fichero 52329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52329;

Registro52329 crear_registro52329(int id) {
    Registro52329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52329(Registro52329 r) {
    return r.valor + r.id;
}
