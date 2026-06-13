// fichero 35553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35553;

Registro35553 crear_registro35553(int id) {
    Registro35553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35553(Registro35553 r) {
    return r.valor + r.id;
}
