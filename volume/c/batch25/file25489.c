// fichero 25489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25489;

Registro25489 crear_registro25489(int id) {
    Registro25489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25489(Registro25489 r) {
    return r.valor + r.id;
}
