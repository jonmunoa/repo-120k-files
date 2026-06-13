// fichero 9525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9525;

Registro9525 crear_registro9525(int id) {
    Registro9525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9525(Registro9525 r) {
    return r.valor + r.id;
}
