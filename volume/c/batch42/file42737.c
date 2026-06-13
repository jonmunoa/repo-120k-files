// fichero 42737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42737;

Registro42737 crear_registro42737(int id) {
    Registro42737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42737(Registro42737 r) {
    return r.valor + r.id;
}
