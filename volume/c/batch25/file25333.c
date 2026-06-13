// fichero 25333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25333;

Registro25333 crear_registro25333(int id) {
    Registro25333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25333(Registro25333 r) {
    return r.valor + r.id;
}
