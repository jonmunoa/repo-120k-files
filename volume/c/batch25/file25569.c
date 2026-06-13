// fichero 25569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25569;

Registro25569 crear_registro25569(int id) {
    Registro25569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25569(Registro25569 r) {
    return r.valor + r.id;
}
