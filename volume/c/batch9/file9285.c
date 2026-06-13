// fichero 9285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9285;

Registro9285 crear_registro9285(int id) {
    Registro9285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9285(Registro9285 r) {
    return r.valor + r.id;
}
