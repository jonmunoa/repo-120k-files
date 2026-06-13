// fichero 40289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40289;

Registro40289 crear_registro40289(int id) {
    Registro40289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40289(Registro40289 r) {
    return r.valor + r.id;
}
