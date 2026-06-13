// fichero 14609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14609;

Registro14609 crear_registro14609(int id) {
    Registro14609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14609(Registro14609 r) {
    return r.valor + r.id;
}
