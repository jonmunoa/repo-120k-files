// fichero 49361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49361;

Registro49361 crear_registro49361(int id) {
    Registro49361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49361(Registro49361 r) {
    return r.valor + r.id;
}
