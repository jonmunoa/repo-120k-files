// fichero 41225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41225;

Registro41225 crear_registro41225(int id) {
    Registro41225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41225(Registro41225 r) {
    return r.valor + r.id;
}
