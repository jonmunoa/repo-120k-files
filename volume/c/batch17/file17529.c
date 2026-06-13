// fichero 17529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17529;

Registro17529 crear_registro17529(int id) {
    Registro17529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17529(Registro17529 r) {
    return r.valor + r.id;
}
