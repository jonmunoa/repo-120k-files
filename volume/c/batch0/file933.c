// fichero 933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro933;

Registro933 crear_registro933(int id) {
    Registro933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro933(Registro933 r) {
    return r.valor + r.id;
}
