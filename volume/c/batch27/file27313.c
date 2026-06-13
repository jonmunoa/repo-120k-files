// fichero 27313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27313;

Registro27313 crear_registro27313(int id) {
    Registro27313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27313(Registro27313 r) {
    return r.valor + r.id;
}
