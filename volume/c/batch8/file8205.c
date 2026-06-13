// fichero 8205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8205;

Registro8205 crear_registro8205(int id) {
    Registro8205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8205(Registro8205 r) {
    return r.valor + r.id;
}
