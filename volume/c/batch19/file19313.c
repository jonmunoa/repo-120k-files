// fichero 19313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19313;

Registro19313 crear_registro19313(int id) {
    Registro19313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19313(Registro19313 r) {
    return r.valor + r.id;
}
