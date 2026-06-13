// fichero 26613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26613;

Registro26613 crear_registro26613(int id) {
    Registro26613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26613(Registro26613 r) {
    return r.valor + r.id;
}
