// fichero 10489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10489;

Registro10489 crear_registro10489(int id) {
    Registro10489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10489(Registro10489 r) {
    return r.valor + r.id;
}
