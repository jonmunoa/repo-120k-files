// fichero 29225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29225;

Registro29225 crear_registro29225(int id) {
    Registro29225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29225(Registro29225 r) {
    return r.valor + r.id;
}
