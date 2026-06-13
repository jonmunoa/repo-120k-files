// fichero 24713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24713;

Registro24713 crear_registro24713(int id) {
    Registro24713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24713(Registro24713 r) {
    return r.valor + r.id;
}
