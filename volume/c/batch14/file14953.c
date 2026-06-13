// fichero 14953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14953;

Registro14953 crear_registro14953(int id) {
    Registro14953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14953(Registro14953 r) {
    return r.valor + r.id;
}
