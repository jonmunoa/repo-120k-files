// fichero 3865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3865;

Registro3865 crear_registro3865(int id) {
    Registro3865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3865(Registro3865 r) {
    return r.valor + r.id;
}
