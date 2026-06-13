// fichero 50425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50425;

Registro50425 crear_registro50425(int id) {
    Registro50425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50425(Registro50425 r) {
    return r.valor + r.id;
}
