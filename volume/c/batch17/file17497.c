// fichero 17497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17497;

Registro17497 crear_registro17497(int id) {
    Registro17497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17497(Registro17497 r) {
    return r.valor + r.id;
}
