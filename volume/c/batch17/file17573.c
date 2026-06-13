// fichero 17573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17573;

Registro17573 crear_registro17573(int id) {
    Registro17573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17573(Registro17573 r) {
    return r.valor + r.id;
}
