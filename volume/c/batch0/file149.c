// fichero 149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro149;

Registro149 crear_registro149(int id) {
    Registro149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro149(Registro149 r) {
    return r.valor + r.id;
}
