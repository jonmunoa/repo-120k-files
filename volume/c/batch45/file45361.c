// fichero 45361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45361;

Registro45361 crear_registro45361(int id) {
    Registro45361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45361(Registro45361 r) {
    return r.valor + r.id;
}
