// fichero 5669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5669;

Registro5669 crear_registro5669(int id) {
    Registro5669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5669(Registro5669 r) {
    return r.valor + r.id;
}
