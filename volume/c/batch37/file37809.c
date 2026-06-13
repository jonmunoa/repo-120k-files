// fichero 37809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37809;

Registro37809 crear_registro37809(int id) {
    Registro37809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37809(Registro37809 r) {
    return r.valor + r.id;
}
