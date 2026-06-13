// fichero 44417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44417;

Registro44417 crear_registro44417(int id) {
    Registro44417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44417(Registro44417 r) {
    return r.valor + r.id;
}
