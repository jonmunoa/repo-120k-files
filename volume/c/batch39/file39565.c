// fichero 39565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39565;

Registro39565 crear_registro39565(int id) {
    Registro39565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39565(Registro39565 r) {
    return r.valor + r.id;
}
