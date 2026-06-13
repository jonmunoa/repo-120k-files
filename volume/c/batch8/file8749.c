// fichero 8749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8749;

Registro8749 crear_registro8749(int id) {
    Registro8749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8749(Registro8749 r) {
    return r.valor + r.id;
}
