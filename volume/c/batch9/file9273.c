// fichero 9273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9273;

Registro9273 crear_registro9273(int id) {
    Registro9273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9273(Registro9273 r) {
    return r.valor + r.id;
}
