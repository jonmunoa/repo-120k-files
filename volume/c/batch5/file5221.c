// fichero 5221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5221;

Registro5221 crear_registro5221(int id) {
    Registro5221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5221(Registro5221 r) {
    return r.valor + r.id;
}
