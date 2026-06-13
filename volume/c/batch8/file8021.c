// fichero 8021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8021;

Registro8021 crear_registro8021(int id) {
    Registro8021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8021(Registro8021 r) {
    return r.valor + r.id;
}
