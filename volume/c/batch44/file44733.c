// fichero 44733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44733;

Registro44733 crear_registro44733(int id) {
    Registro44733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44733(Registro44733 r) {
    return r.valor + r.id;
}
