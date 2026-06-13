// fichero 9853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9853;

Registro9853 crear_registro9853(int id) {
    Registro9853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9853(Registro9853 r) {
    return r.valor + r.id;
}
