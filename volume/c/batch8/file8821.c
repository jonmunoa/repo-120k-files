// fichero 8821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8821;

Registro8821 crear_registro8821(int id) {
    Registro8821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8821(Registro8821 r) {
    return r.valor + r.id;
}
