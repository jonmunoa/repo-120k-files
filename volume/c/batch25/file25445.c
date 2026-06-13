// fichero 25445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25445;

Registro25445 crear_registro25445(int id) {
    Registro25445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25445(Registro25445 r) {
    return r.valor + r.id;
}
