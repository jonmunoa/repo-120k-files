// fichero 39197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39197;

Registro39197 crear_registro39197(int id) {
    Registro39197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39197(Registro39197 r) {
    return r.valor + r.id;
}
