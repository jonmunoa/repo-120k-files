// fichero 40505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40505;

Registro40505 crear_registro40505(int id) {
    Registro40505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40505(Registro40505 r) {
    return r.valor + r.id;
}
