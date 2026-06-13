// fichero 41317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41317;

Registro41317 crear_registro41317(int id) {
    Registro41317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41317(Registro41317 r) {
    return r.valor + r.id;
}
