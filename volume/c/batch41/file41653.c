// fichero 41653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41653;

Registro41653 crear_registro41653(int id) {
    Registro41653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41653(Registro41653 r) {
    return r.valor + r.id;
}
