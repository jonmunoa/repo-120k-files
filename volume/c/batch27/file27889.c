// fichero 27889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27889;

Registro27889 crear_registro27889(int id) {
    Registro27889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27889(Registro27889 r) {
    return r.valor + r.id;
}
