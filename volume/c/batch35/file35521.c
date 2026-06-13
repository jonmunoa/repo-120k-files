// fichero 35521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35521;

Registro35521 crear_registro35521(int id) {
    Registro35521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35521(Registro35521 r) {
    return r.valor + r.id;
}
