// fichero 27281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27281;

Registro27281 crear_registro27281(int id) {
    Registro27281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27281(Registro27281 r) {
    return r.valor + r.id;
}
