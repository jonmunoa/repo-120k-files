// fichero 6129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6129;

Registro6129 crear_registro6129(int id) {
    Registro6129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6129(Registro6129 r) {
    return r.valor + r.id;
}
