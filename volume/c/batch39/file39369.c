// fichero 39369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39369;

Registro39369 crear_registro39369(int id) {
    Registro39369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39369(Registro39369 r) {
    return r.valor + r.id;
}
