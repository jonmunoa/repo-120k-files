// fichero 10445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10445;

Registro10445 crear_registro10445(int id) {
    Registro10445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10445(Registro10445 r) {
    return r.valor + r.id;
}
