// fichero 9641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9641;

Registro9641 crear_registro9641(int id) {
    Registro9641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9641(Registro9641 r) {
    return r.valor + r.id;
}
