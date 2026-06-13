// fichero 41105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41105;

Registro41105 crear_registro41105(int id) {
    Registro41105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41105(Registro41105 r) {
    return r.valor + r.id;
}
