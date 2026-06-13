// fichero 41017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41017;

Registro41017 crear_registro41017(int id) {
    Registro41017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41017(Registro41017 r) {
    return r.valor + r.id;
}
