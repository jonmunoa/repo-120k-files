// fichero 36829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36829;

Registro36829 crear_registro36829(int id) {
    Registro36829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36829(Registro36829 r) {
    return r.valor + r.id;
}
