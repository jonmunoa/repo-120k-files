// fichero 29133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29133;

Registro29133 crear_registro29133(int id) {
    Registro29133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29133(Registro29133 r) {
    return r.valor + r.id;
}
