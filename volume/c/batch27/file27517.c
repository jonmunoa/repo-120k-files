// fichero 27517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27517;

Registro27517 crear_registro27517(int id) {
    Registro27517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27517(Registro27517 r) {
    return r.valor + r.id;
}
