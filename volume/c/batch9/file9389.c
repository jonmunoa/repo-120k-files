// fichero 9389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9389;

Registro9389 crear_registro9389(int id) {
    Registro9389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9389(Registro9389 r) {
    return r.valor + r.id;
}
