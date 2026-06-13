// fichero 5593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5593;

Registro5593 crear_registro5593(int id) {
    Registro5593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5593(Registro5593 r) {
    return r.valor + r.id;
}
