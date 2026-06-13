// fichero 35417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35417;

Registro35417 crear_registro35417(int id) {
    Registro35417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35417(Registro35417 r) {
    return r.valor + r.id;
}
