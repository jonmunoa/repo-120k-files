// fichero 4165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4165;

Registro4165 crear_registro4165(int id) {
    Registro4165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4165(Registro4165 r) {
    return r.valor + r.id;
}
