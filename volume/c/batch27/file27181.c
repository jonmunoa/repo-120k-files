// fichero 27181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27181;

Registro27181 crear_registro27181(int id) {
    Registro27181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27181(Registro27181 r) {
    return r.valor + r.id;
}
