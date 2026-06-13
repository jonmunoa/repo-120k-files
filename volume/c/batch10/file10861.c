// fichero 10861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10861;

Registro10861 crear_registro10861(int id) {
    Registro10861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10861(Registro10861 r) {
    return r.valor + r.id;
}
