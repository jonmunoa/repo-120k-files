// fichero 39753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39753;

Registro39753 crear_registro39753(int id) {
    Registro39753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39753(Registro39753 r) {
    return r.valor + r.id;
}
