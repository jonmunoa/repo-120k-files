// fichero 41497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41497;

Registro41497 crear_registro41497(int id) {
    Registro41497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41497(Registro41497 r) {
    return r.valor + r.id;
}
