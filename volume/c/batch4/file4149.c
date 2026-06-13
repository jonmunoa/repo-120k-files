// fichero 4149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4149;

Registro4149 crear_registro4149(int id) {
    Registro4149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4149(Registro4149 r) {
    return r.valor + r.id;
}
