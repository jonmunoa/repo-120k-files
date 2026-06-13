// fichero 34201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34201;

Registro34201 crear_registro34201(int id) {
    Registro34201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34201(Registro34201 r) {
    return r.valor + r.id;
}
