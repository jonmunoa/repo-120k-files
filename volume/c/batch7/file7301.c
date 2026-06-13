// fichero 7301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7301;

Registro7301 crear_registro7301(int id) {
    Registro7301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7301(Registro7301 r) {
    return r.valor + r.id;
}
