// fichero 2221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2221;

Registro2221 crear_registro2221(int id) {
    Registro2221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2221(Registro2221 r) {
    return r.valor + r.id;
}
