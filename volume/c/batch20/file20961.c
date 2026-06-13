// fichero 20961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20961;

Registro20961 crear_registro20961(int id) {
    Registro20961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20961(Registro20961 r) {
    return r.valor + r.id;
}
