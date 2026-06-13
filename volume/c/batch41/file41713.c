// fichero 41713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41713;

Registro41713 crear_registro41713(int id) {
    Registro41713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41713(Registro41713 r) {
    return r.valor + r.id;
}
