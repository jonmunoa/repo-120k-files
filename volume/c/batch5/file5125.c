// fichero 5125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5125;

Registro5125 crear_registro5125(int id) {
    Registro5125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5125(Registro5125 r) {
    return r.valor + r.id;
}
