// fichero 49829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49829;

Registro49829 crear_registro49829(int id) {
    Registro49829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49829(Registro49829 r) {
    return r.valor + r.id;
}
