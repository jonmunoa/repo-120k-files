// fichero 28961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28961;

Registro28961 crear_registro28961(int id) {
    Registro28961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28961(Registro28961 r) {
    return r.valor + r.id;
}
