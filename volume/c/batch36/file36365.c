// fichero 36365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36365;

Registro36365 crear_registro36365(int id) {
    Registro36365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36365(Registro36365 r) {
    return r.valor + r.id;
}
