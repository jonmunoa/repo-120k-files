// fichero 39513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39513;

Registro39513 crear_registro39513(int id) {
    Registro39513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39513(Registro39513 r) {
    return r.valor + r.id;
}
