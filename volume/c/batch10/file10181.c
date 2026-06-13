// fichero 10181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10181;

Registro10181 crear_registro10181(int id) {
    Registro10181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10181(Registro10181 r) {
    return r.valor + r.id;
}
