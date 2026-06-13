// fichero 6001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6001;

Registro6001 crear_registro6001(int id) {
    Registro6001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6001(Registro6001 r) {
    return r.valor + r.id;
}
