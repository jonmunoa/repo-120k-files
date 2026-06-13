// fichero 27961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27961;

Registro27961 crear_registro27961(int id) {
    Registro27961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27961(Registro27961 r) {
    return r.valor + r.id;
}
