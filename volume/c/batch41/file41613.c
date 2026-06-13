// fichero 41613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41613;

Registro41613 crear_registro41613(int id) {
    Registro41613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41613(Registro41613 r) {
    return r.valor + r.id;
}
