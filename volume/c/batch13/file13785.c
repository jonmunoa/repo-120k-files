// fichero 13785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13785;

Registro13785 crear_registro13785(int id) {
    Registro13785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13785(Registro13785 r) {
    return r.valor + r.id;
}
