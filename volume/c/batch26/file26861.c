// fichero 26861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26861;

Registro26861 crear_registro26861(int id) {
    Registro26861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26861(Registro26861 r) {
    return r.valor + r.id;
}
