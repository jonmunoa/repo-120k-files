// fichero 5113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5113;

Registro5113 crear_registro5113(int id) {
    Registro5113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5113(Registro5113 r) {
    return r.valor + r.id;
}
