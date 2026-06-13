// fichero 8953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8953;

Registro8953 crear_registro8953(int id) {
    Registro8953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8953(Registro8953 r) {
    return r.valor + r.id;
}
