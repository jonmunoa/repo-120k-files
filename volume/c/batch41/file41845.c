// fichero 41845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41845;

Registro41845 crear_registro41845(int id) {
    Registro41845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41845(Registro41845 r) {
    return r.valor + r.id;
}
