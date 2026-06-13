// fichero 36717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36717;

Registro36717 crear_registro36717(int id) {
    Registro36717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36717(Registro36717 r) {
    return r.valor + r.id;
}
