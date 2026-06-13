// fichero 31413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31413;

Registro31413 crear_registro31413(int id) {
    Registro31413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31413(Registro31413 r) {
    return r.valor + r.id;
}
