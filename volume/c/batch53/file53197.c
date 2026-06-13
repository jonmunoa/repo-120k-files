// fichero 53197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53197;

Registro53197 crear_registro53197(int id) {
    Registro53197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53197(Registro53197 r) {
    return r.valor + r.id;
}
