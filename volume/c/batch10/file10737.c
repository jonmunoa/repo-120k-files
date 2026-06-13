// fichero 10737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10737;

Registro10737 crear_registro10737(int id) {
    Registro10737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10737(Registro10737 r) {
    return r.valor + r.id;
}
