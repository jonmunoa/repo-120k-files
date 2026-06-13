// fichero 3965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3965;

Registro3965 crear_registro3965(int id) {
    Registro3965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3965(Registro3965 r) {
    return r.valor + r.id;
}
