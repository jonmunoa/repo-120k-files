// fichero 50361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50361;

Registro50361 crear_registro50361(int id) {
    Registro50361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50361(Registro50361 r) {
    return r.valor + r.id;
}
