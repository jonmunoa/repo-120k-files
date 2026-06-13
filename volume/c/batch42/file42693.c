// fichero 42693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42693;

Registro42693 crear_registro42693(int id) {
    Registro42693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42693(Registro42693 r) {
    return r.valor + r.id;
}
