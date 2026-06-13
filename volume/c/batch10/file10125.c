// fichero 10125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10125;

Registro10125 crear_registro10125(int id) {
    Registro10125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10125(Registro10125 r) {
    return r.valor + r.id;
}
