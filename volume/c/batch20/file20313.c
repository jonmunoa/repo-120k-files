// fichero 20313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20313;

Registro20313 crear_registro20313(int id) {
    Registro20313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20313(Registro20313 r) {
    return r.valor + r.id;
}
