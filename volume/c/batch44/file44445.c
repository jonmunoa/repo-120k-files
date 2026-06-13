// fichero 44445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44445;

Registro44445 crear_registro44445(int id) {
    Registro44445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44445(Registro44445 r) {
    return r.valor + r.id;
}
