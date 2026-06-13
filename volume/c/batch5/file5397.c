// fichero 5397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5397;

Registro5397 crear_registro5397(int id) {
    Registro5397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5397(Registro5397 r) {
    return r.valor + r.id;
}
