// fichero 25957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25957;

Registro25957 crear_registro25957(int id) {
    Registro25957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25957(Registro25957 r) {
    return r.valor + r.id;
}
