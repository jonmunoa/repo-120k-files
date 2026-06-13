// fichero 25153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25153;

Registro25153 crear_registro25153(int id) {
    Registro25153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25153(Registro25153 r) {
    return r.valor + r.id;
}
