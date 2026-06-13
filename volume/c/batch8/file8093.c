// fichero 8093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8093;

Registro8093 crear_registro8093(int id) {
    Registro8093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8093(Registro8093 r) {
    return r.valor + r.id;
}
