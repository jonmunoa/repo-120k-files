// fichero 41605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41605;

Registro41605 crear_registro41605(int id) {
    Registro41605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41605(Registro41605 r) {
    return r.valor + r.id;
}
