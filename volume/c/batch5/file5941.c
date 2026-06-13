// fichero 5941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5941;

Registro5941 crear_registro5941(int id) {
    Registro5941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5941(Registro5941 r) {
    return r.valor + r.id;
}
