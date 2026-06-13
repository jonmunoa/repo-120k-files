// fichero 34601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34601;

Registro34601 crear_registro34601(int id) {
    Registro34601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34601(Registro34601 r) {
    return r.valor + r.id;
}
