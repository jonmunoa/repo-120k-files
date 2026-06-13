// fichero 39789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39789;

Registro39789 crear_registro39789(int id) {
    Registro39789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39789(Registro39789 r) {
    return r.valor + r.id;
}
