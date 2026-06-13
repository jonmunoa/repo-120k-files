// fichero 42565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42565;

Registro42565 crear_registro42565(int id) {
    Registro42565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42565(Registro42565 r) {
    return r.valor + r.id;
}
