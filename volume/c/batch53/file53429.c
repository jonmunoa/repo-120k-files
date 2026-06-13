// fichero 53429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53429;

Registro53429 crear_registro53429(int id) {
    Registro53429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53429(Registro53429 r) {
    return r.valor + r.id;
}
