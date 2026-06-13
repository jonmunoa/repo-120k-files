// fichero 46525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46525;

Registro46525 crear_registro46525(int id) {
    Registro46525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46525(Registro46525 r) {
    return r.valor + r.id;
}
