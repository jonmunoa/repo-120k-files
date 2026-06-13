// fichero 19393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19393;

Registro19393 crear_registro19393(int id) {
    Registro19393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19393(Registro19393 r) {
    return r.valor + r.id;
}
