// fichero 8669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8669;

Registro8669 crear_registro8669(int id) {
    Registro8669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8669(Registro8669 r) {
    return r.valor + r.id;
}
