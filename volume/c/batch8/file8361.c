// fichero 8361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8361;

Registro8361 crear_registro8361(int id) {
    Registro8361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8361(Registro8361 r) {
    return r.valor + r.id;
}
