// fichero 35497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35497;

Registro35497 crear_registro35497(int id) {
    Registro35497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35497(Registro35497 r) {
    return r.valor + r.id;
}
