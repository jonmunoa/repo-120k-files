// fichero 42809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42809;

Registro42809 crear_registro42809(int id) {
    Registro42809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42809(Registro42809 r) {
    return r.valor + r.id;
}
