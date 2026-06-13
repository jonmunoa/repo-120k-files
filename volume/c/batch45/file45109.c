// fichero 45109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45109;

Registro45109 crear_registro45109(int id) {
    Registro45109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45109(Registro45109 r) {
    return r.valor + r.id;
}
