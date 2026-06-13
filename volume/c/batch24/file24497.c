// fichero 24497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24497;

Registro24497 crear_registro24497(int id) {
    Registro24497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24497(Registro24497 r) {
    return r.valor + r.id;
}
