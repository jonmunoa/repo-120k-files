// fichero 25993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25993;

Registro25993 crear_registro25993(int id) {
    Registro25993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25993(Registro25993 r) {
    return r.valor + r.id;
}
