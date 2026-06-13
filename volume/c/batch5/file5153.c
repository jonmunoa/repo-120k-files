// fichero 5153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5153;

Registro5153 crear_registro5153(int id) {
    Registro5153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5153(Registro5153 r) {
    return r.valor + r.id;
}
