// fichero 36197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36197;

Registro36197 crear_registro36197(int id) {
    Registro36197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36197(Registro36197 r) {
    return r.valor + r.id;
}
