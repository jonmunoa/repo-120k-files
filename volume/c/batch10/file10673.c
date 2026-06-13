// fichero 10673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10673;

Registro10673 crear_registro10673(int id) {
    Registro10673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10673(Registro10673 r) {
    return r.valor + r.id;
}
