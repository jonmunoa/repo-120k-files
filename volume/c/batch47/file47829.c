// fichero 47829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47829;

Registro47829 crear_registro47829(int id) {
    Registro47829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47829(Registro47829 r) {
    return r.valor + r.id;
}
