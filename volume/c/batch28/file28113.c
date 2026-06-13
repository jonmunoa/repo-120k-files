// fichero 28113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28113;

Registro28113 crear_registro28113(int id) {
    Registro28113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28113(Registro28113 r) {
    return r.valor + r.id;
}
