// fichero 39965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39965;

Registro39965 crear_registro39965(int id) {
    Registro39965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39965(Registro39965 r) {
    return r.valor + r.id;
}
