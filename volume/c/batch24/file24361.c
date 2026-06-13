// fichero 24361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24361;

Registro24361 crear_registro24361(int id) {
    Registro24361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24361(Registro24361 r) {
    return r.valor + r.id;
}
