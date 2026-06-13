// fichero 44729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44729;

Registro44729 crear_registro44729(int id) {
    Registro44729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44729(Registro44729 r) {
    return r.valor + r.id;
}
