// fichero 4697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4697;

Registro4697 crear_registro4697(int id) {
    Registro4697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4697(Registro4697 r) {
    return r.valor + r.id;
}
