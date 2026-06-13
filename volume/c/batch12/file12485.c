// fichero 12485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12485;

Registro12485 crear_registro12485(int id) {
    Registro12485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12485(Registro12485 r) {
    return r.valor + r.id;
}
