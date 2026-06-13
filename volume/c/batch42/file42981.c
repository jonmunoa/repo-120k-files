// fichero 42981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42981;

Registro42981 crear_registro42981(int id) {
    Registro42981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42981(Registro42981 r) {
    return r.valor + r.id;
}
