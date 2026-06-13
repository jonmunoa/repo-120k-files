// fichero 953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro953;

Registro953 crear_registro953(int id) {
    Registro953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro953(Registro953 r) {
    return r.valor + r.id;
}
