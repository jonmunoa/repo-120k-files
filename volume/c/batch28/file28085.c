// fichero 28085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28085;

Registro28085 crear_registro28085(int id) {
    Registro28085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28085(Registro28085 r) {
    return r.valor + r.id;
}
