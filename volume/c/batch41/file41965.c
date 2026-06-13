// fichero 41965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41965;

Registro41965 crear_registro41965(int id) {
    Registro41965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41965(Registro41965 r) {
    return r.valor + r.id;
}
