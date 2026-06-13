// fichero 40397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40397;

Registro40397 crear_registro40397(int id) {
    Registro40397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40397(Registro40397 r) {
    return r.valor + r.id;
}
