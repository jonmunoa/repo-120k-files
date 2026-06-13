// fichero 26961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26961;

Registro26961 crear_registro26961(int id) {
    Registro26961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26961(Registro26961 r) {
    return r.valor + r.id;
}
