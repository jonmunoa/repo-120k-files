// fichero 34285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34285;

Registro34285 crear_registro34285(int id) {
    Registro34285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34285(Registro34285 r) {
    return r.valor + r.id;
}
