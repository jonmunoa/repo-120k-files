// fichero 25649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25649;

Registro25649 crear_registro25649(int id) {
    Registro25649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25649(Registro25649 r) {
    return r.valor + r.id;
}
