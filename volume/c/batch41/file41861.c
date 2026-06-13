// fichero 41861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41861;

Registro41861 crear_registro41861(int id) {
    Registro41861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41861(Registro41861 r) {
    return r.valor + r.id;
}
