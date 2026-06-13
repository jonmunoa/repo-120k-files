// fichero 39397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39397;

Registro39397 crear_registro39397(int id) {
    Registro39397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39397(Registro39397 r) {
    return r.valor + r.id;
}
