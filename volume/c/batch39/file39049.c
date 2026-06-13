// fichero 39049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39049;

Registro39049 crear_registro39049(int id) {
    Registro39049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39049(Registro39049 r) {
    return r.valor + r.id;
}
