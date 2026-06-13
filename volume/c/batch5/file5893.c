// fichero 5893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5893;

Registro5893 crear_registro5893(int id) {
    Registro5893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5893(Registro5893 r) {
    return r.valor + r.id;
}
