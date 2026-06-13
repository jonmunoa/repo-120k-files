// fichero 27661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27661;

Registro27661 crear_registro27661(int id) {
    Registro27661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27661(Registro27661 r) {
    return r.valor + r.id;
}
