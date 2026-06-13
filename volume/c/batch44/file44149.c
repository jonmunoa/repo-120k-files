// fichero 44149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44149;

Registro44149 crear_registro44149(int id) {
    Registro44149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44149(Registro44149 r) {
    return r.valor + r.id;
}
