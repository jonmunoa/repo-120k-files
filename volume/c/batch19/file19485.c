// fichero 19485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19485;

Registro19485 crear_registro19485(int id) {
    Registro19485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19485(Registro19485 r) {
    return r.valor + r.id;
}
