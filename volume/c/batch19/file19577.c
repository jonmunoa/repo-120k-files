// fichero 19577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19577;

Registro19577 crear_registro19577(int id) {
    Registro19577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19577(Registro19577 r) {
    return r.valor + r.id;
}
