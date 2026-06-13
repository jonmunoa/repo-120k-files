// fichero 31957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31957;

Registro31957 crear_registro31957(int id) {
    Registro31957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31957(Registro31957 r) {
    return r.valor + r.id;
}
