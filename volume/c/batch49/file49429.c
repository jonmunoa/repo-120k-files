// fichero 49429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49429;

Registro49429 crear_registro49429(int id) {
    Registro49429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49429(Registro49429 r) {
    return r.valor + r.id;
}
