// fichero 7165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7165;

Registro7165 crear_registro7165(int id) {
    Registro7165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7165(Registro7165 r) {
    return r.valor + r.id;
}
