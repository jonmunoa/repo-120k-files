// fichero 28829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28829;

Registro28829 crear_registro28829(int id) {
    Registro28829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28829(Registro28829 r) {
    return r.valor + r.id;
}
