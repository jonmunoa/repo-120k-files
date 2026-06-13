// fichero 6953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6953;

Registro6953 crear_registro6953(int id) {
    Registro6953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6953(Registro6953 r) {
    return r.valor + r.id;
}
