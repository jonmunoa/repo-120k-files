// fichero 39021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39021;

Registro39021 crear_registro39021(int id) {
    Registro39021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39021(Registro39021 r) {
    return r.valor + r.id;
}
