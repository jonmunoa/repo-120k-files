// fichero 18961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18961;

Registro18961 crear_registro18961(int id) {
    Registro18961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18961(Registro18961 r) {
    return r.valor + r.id;
}
