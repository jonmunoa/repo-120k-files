// fichero 7425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7425;

Registro7425 crear_registro7425(int id) {
    Registro7425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7425(Registro7425 r) {
    return r.valor + r.id;
}
