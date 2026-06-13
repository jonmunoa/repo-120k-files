// fichero 5969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5969;

Registro5969 crear_registro5969(int id) {
    Registro5969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5969(Registro5969 r) {
    return r.valor + r.id;
}
