// fichero 27885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27885;

Registro27885 crear_registro27885(int id) {
    Registro27885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27885(Registro27885 r) {
    return r.valor + r.id;
}
