// fichero 23629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23629;

Registro23629 crear_registro23629(int id) {
    Registro23629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23629(Registro23629 r) {
    return r.valor + r.id;
}
