// fichero 39785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39785;

Registro39785 crear_registro39785(int id) {
    Registro39785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39785(Registro39785 r) {
    return r.valor + r.id;
}
