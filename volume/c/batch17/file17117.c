// fichero 17117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17117;

Registro17117 crear_registro17117(int id) {
    Registro17117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17117(Registro17117 r) {
    return r.valor + r.id;
}
