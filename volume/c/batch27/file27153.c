// fichero 27153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27153;

Registro27153 crear_registro27153(int id) {
    Registro27153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27153(Registro27153 r) {
    return r.valor + r.id;
}
