// fichero 41825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41825;

Registro41825 crear_registro41825(int id) {
    Registro41825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41825(Registro41825 r) {
    return r.valor + r.id;
}
