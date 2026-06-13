// fichero 24657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24657;

Registro24657 crear_registro24657(int id) {
    Registro24657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24657(Registro24657 r) {
    return r.valor + r.id;
}
