// fichero 27789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27789;

Registro27789 crear_registro27789(int id) {
    Registro27789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27789(Registro27789 r) {
    return r.valor + r.id;
}
