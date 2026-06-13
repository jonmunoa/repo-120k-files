// fichero 41989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41989;

Registro41989 crear_registro41989(int id) {
    Registro41989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41989(Registro41989 r) {
    return r.valor + r.id;
}
