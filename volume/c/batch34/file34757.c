// fichero 34757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34757;

Registro34757 crear_registro34757(int id) {
    Registro34757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34757(Registro34757 r) {
    return r.valor + r.id;
}
