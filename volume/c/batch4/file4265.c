// fichero 4265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4265;

Registro4265 crear_registro4265(int id) {
    Registro4265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4265(Registro4265 r) {
    return r.valor + r.id;
}
