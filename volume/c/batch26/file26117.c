// fichero 26117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26117;

Registro26117 crear_registro26117(int id) {
    Registro26117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26117(Registro26117 r) {
    return r.valor + r.id;
}
