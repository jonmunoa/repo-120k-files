// fichero 41617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41617;

Registro41617 crear_registro41617(int id) {
    Registro41617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41617(Registro41617 r) {
    return r.valor + r.id;
}
