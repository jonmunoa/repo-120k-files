// fichero 21497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21497;

Registro21497 crear_registro21497(int id) {
    Registro21497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21497(Registro21497 r) {
    return r.valor + r.id;
}
