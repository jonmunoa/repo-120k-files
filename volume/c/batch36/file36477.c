// fichero 36477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36477;

Registro36477 crear_registro36477(int id) {
    Registro36477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36477(Registro36477 r) {
    return r.valor + r.id;
}
