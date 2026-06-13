// fichero 9361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9361;

Registro9361 crear_registro9361(int id) {
    Registro9361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9361(Registro9361 r) {
    return r.valor + r.id;
}
