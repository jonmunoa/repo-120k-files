// fichero 49965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49965;

Registro49965 crear_registro49965(int id) {
    Registro49965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49965(Registro49965 r) {
    return r.valor + r.id;
}
