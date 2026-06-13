// fichero 2445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2445;

Registro2445 crear_registro2445(int id) {
    Registro2445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2445(Registro2445 r) {
    return r.valor + r.id;
}
