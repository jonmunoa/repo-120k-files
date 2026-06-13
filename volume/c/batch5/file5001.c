// fichero 5001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5001;

Registro5001 crear_registro5001(int id) {
    Registro5001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5001(Registro5001 r) {
    return r.valor + r.id;
}
