// fichero 3497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3497;

Registro3497 crear_registro3497(int id) {
    Registro3497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3497(Registro3497 r) {
    return r.valor + r.id;
}
