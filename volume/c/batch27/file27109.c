// fichero 27109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27109;

Registro27109 crear_registro27109(int id) {
    Registro27109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27109(Registro27109 r) {
    return r.valor + r.id;
}
