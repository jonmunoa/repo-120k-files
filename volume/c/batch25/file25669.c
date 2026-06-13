// fichero 25669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25669;

Registro25669 crear_registro25669(int id) {
    Registro25669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25669(Registro25669 r) {
    return r.valor + r.id;
}
