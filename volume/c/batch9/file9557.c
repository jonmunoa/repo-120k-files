// fichero 9557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9557;

Registro9557 crear_registro9557(int id) {
    Registro9557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9557(Registro9557 r) {
    return r.valor + r.id;
}
