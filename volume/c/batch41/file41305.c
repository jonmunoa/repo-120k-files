// fichero 41305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41305;

Registro41305 crear_registro41305(int id) {
    Registro41305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41305(Registro41305 r) {
    return r.valor + r.id;
}
