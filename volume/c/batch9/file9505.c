// fichero 9505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9505;

Registro9505 crear_registro9505(int id) {
    Registro9505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9505(Registro9505 r) {
    return r.valor + r.id;
}
