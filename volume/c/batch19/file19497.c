// fichero 19497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19497;

Registro19497 crear_registro19497(int id) {
    Registro19497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19497(Registro19497 r) {
    return r.valor + r.id;
}
