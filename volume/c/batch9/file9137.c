// fichero 9137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9137;

Registro9137 crear_registro9137(int id) {
    Registro9137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9137(Registro9137 r) {
    return r.valor + r.id;
}
