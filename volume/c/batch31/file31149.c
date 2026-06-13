// fichero 31149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31149;

Registro31149 crear_registro31149(int id) {
    Registro31149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31149(Registro31149 r) {
    return r.valor + r.id;
}
