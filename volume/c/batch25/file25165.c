// fichero 25165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25165;

Registro25165 crear_registro25165(int id) {
    Registro25165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25165(Registro25165 r) {
    return r.valor + r.id;
}
