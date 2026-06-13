// fichero 54033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54033;

Registro54033 crear_registro54033(int id) {
    Registro54033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54033(Registro54033 r) {
    return r.valor + r.id;
}
