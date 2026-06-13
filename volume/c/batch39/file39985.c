// fichero 39985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39985;

Registro39985 crear_registro39985(int id) {
    Registro39985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39985(Registro39985 r) {
    return r.valor + r.id;
}
