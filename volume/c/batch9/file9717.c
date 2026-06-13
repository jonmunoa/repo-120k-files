// fichero 9717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9717;

Registro9717 crear_registro9717(int id) {
    Registro9717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9717(Registro9717 r) {
    return r.valor + r.id;
}
