// fichero 25809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25809;

Registro25809 crear_registro25809(int id) {
    Registro25809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25809(Registro25809 r) {
    return r.valor + r.id;
}
