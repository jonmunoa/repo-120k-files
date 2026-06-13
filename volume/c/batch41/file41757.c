// fichero 41757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41757;

Registro41757 crear_registro41757(int id) {
    Registro41757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41757(Registro41757 r) {
    return r.valor + r.id;
}
