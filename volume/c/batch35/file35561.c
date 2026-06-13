// fichero 35561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35561;

Registro35561 crear_registro35561(int id) {
    Registro35561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35561(Registro35561 r) {
    return r.valor + r.id;
}
