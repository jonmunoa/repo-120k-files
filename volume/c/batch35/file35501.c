// fichero 35501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35501;

Registro35501 crear_registro35501(int id) {
    Registro35501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35501(Registro35501 r) {
    return r.valor + r.id;
}
