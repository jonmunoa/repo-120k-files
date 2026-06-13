// fichero 53497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53497;

Registro53497 crear_registro53497(int id) {
    Registro53497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53497(Registro53497 r) {
    return r.valor + r.id;
}
