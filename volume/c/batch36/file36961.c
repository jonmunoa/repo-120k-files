// fichero 36961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36961;

Registro36961 crear_registro36961(int id) {
    Registro36961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36961(Registro36961 r) {
    return r.valor + r.id;
}
