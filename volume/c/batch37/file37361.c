// fichero 37361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37361;

Registro37361 crear_registro37361(int id) {
    Registro37361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37361(Registro37361 r) {
    return r.valor + r.id;
}
