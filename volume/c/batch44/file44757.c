// fichero 44757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44757;

Registro44757 crear_registro44757(int id) {
    Registro44757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44757(Registro44757 r) {
    return r.valor + r.id;
}
