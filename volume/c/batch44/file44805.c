// fichero 44805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44805;

Registro44805 crear_registro44805(int id) {
    Registro44805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44805(Registro44805 r) {
    return r.valor + r.id;
}
