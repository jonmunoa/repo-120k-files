// fichero 25329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25329;

Registro25329 crear_registro25329(int id) {
    Registro25329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25329(Registro25329 r) {
    return r.valor + r.id;
}
