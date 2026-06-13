// fichero 11465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11465;

Registro11465 crear_registro11465(int id) {
    Registro11465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11465(Registro11465 r) {
    return r.valor + r.id;
}
