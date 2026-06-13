// fichero 41145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41145;

Registro41145 crear_registro41145(int id) {
    Registro41145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41145(Registro41145 r) {
    return r.valor + r.id;
}
