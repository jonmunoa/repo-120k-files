// fichero 24433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24433;

Registro24433 crear_registro24433(int id) {
    Registro24433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24433(Registro24433 r) {
    return r.valor + r.id;
}
