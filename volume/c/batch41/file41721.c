// fichero 41721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41721;

Registro41721 crear_registro41721(int id) {
    Registro41721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41721(Registro41721 r) {
    return r.valor + r.id;
}
