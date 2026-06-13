// fichero 41657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41657;

Registro41657 crear_registro41657(int id) {
    Registro41657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41657(Registro41657 r) {
    return r.valor + r.id;
}
