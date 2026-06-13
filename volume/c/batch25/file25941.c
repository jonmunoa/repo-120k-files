// fichero 25941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25941;

Registro25941 crear_registro25941(int id) {
    Registro25941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25941(Registro25941 r) {
    return r.valor + r.id;
}
