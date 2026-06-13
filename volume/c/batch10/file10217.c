// fichero 10217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10217;

Registro10217 crear_registro10217(int id) {
    Registro10217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10217(Registro10217 r) {
    return r.valor + r.id;
}
