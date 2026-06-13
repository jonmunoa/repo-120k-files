// fichero 3425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3425;

Registro3425 crear_registro3425(int id) {
    Registro3425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3425(Registro3425 r) {
    return r.valor + r.id;
}
