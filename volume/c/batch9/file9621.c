// fichero 9621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9621;

Registro9621 crear_registro9621(int id) {
    Registro9621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9621(Registro9621 r) {
    return r.valor + r.id;
}
