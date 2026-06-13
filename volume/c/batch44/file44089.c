// fichero 44089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44089;

Registro44089 crear_registro44089(int id) {
    Registro44089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44089(Registro44089 r) {
    return r.valor + r.id;
}
