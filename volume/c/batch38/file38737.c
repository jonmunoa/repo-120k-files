// fichero 38737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38737;

Registro38737 crear_registro38737(int id) {
    Registro38737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38737(Registro38737 r) {
    return r.valor + r.id;
}
