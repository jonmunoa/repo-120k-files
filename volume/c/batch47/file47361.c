// fichero 47361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47361;

Registro47361 crear_registro47361(int id) {
    Registro47361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47361(Registro47361 r) {
    return r.valor + r.id;
}
