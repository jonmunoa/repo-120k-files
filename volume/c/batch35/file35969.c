// fichero 35969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35969;

Registro35969 crear_registro35969(int id) {
    Registro35969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35969(Registro35969 r) {
    return r.valor + r.id;
}
