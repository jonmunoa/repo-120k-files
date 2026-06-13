// fichero 37953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37953;

Registro37953 crear_registro37953(int id) {
    Registro37953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37953(Registro37953 r) {
    return r.valor + r.id;
}
