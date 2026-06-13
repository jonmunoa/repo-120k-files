// fichero 41185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41185;

Registro41185 crear_registro41185(int id) {
    Registro41185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41185(Registro41185 r) {
    return r.valor + r.id;
}
