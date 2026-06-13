// fichero 39893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39893;

Registro39893 crear_registro39893(int id) {
    Registro39893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39893(Registro39893 r) {
    return r.valor + r.id;
}
