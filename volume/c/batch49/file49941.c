// fichero 49941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49941;

Registro49941 crear_registro49941(int id) {
    Registro49941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49941(Registro49941 r) {
    return r.valor + r.id;
}
