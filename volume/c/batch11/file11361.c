// fichero 11361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11361;

Registro11361 crear_registro11361(int id) {
    Registro11361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11361(Registro11361 r) {
    return r.valor + r.id;
}
