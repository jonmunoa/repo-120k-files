// fichero 41953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41953;

Registro41953 crear_registro41953(int id) {
    Registro41953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41953(Registro41953 r) {
    return r.valor + r.id;
}
