// fichero 49985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49985;

Registro49985 crear_registro49985(int id) {
    Registro49985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49985(Registro49985 r) {
    return r.valor + r.id;
}
