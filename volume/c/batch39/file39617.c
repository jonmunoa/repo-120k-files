// fichero 39617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39617;

Registro39617 crear_registro39617(int id) {
    Registro39617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39617(Registro39617 r) {
    return r.valor + r.id;
}
