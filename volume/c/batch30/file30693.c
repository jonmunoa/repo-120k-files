// fichero 30693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30693;

Registro30693 crear_registro30693(int id) {
    Registro30693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30693(Registro30693 r) {
    return r.valor + r.id;
}
