// fichero 34877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34877;

Registro34877 crear_registro34877(int id) {
    Registro34877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34877(Registro34877 r) {
    return r.valor + r.id;
}
