// fichero 41361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41361;

Registro41361 crear_registro41361(int id) {
    Registro41361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41361(Registro41361 r) {
    return r.valor + r.id;
}
