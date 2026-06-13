// fichero 8865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8865;

Registro8865 crear_registro8865(int id) {
    Registro8865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8865(Registro8865 r) {
    return r.valor + r.id;
}
