// fichero 917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro917;

Registro917 crear_registro917(int id) {
    Registro917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro917(Registro917 r) {
    return r.valor + r.id;
}
