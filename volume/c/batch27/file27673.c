// fichero 27673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27673;

Registro27673 crear_registro27673(int id) {
    Registro27673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27673(Registro27673 r) {
    return r.valor + r.id;
}
