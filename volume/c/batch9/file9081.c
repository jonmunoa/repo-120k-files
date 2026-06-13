// fichero 9081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9081;

Registro9081 crear_registro9081(int id) {
    Registro9081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9081(Registro9081 r) {
    return r.valor + r.id;
}
