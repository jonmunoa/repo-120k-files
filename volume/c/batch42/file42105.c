// fichero 42105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42105;

Registro42105 crear_registro42105(int id) {
    Registro42105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42105(Registro42105 r) {
    return r.valor + r.id;
}
