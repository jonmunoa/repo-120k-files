// fichero 41601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41601;

Registro41601 crear_registro41601(int id) {
    Registro41601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41601(Registro41601 r) {
    return r.valor + r.id;
}
