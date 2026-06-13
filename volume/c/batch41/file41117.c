// fichero 41117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41117;

Registro41117 crear_registro41117(int id) {
    Registro41117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41117(Registro41117 r) {
    return r.valor + r.id;
}
