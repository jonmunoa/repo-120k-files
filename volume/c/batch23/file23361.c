// fichero 23361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23361;

Registro23361 crear_registro23361(int id) {
    Registro23361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23361(Registro23361 r) {
    return r.valor + r.id;
}
