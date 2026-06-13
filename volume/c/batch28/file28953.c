// fichero 28953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28953;

Registro28953 crear_registro28953(int id) {
    Registro28953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28953(Registro28953 r) {
    return r.valor + r.id;
}
