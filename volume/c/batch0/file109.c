// fichero 109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro109;

Registro109 crear_registro109(int id) {
    Registro109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro109(Registro109 r) {
    return r.valor + r.id;
}
