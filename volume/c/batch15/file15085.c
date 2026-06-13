// fichero 15085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15085;

Registro15085 crear_registro15085(int id) {
    Registro15085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15085(Registro15085 r) {
    return r.valor + r.id;
}
