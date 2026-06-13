// fichero 41741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41741;

Registro41741 crear_registro41741(int id) {
    Registro41741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41741(Registro41741 r) {
    return r.valor + r.id;
}
