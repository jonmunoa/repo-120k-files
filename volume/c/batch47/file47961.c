// fichero 47961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47961;

Registro47961 crear_registro47961(int id) {
    Registro47961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47961(Registro47961 r) {
    return r.valor + r.id;
}
