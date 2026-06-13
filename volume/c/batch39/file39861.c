// fichero 39861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39861;

Registro39861 crear_registro39861(int id) {
    Registro39861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39861(Registro39861 r) {
    return r.valor + r.id;
}
