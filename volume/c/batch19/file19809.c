// fichero 19809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19809;

Registro19809 crear_registro19809(int id) {
    Registro19809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19809(Registro19809 r) {
    return r.valor + r.id;
}
