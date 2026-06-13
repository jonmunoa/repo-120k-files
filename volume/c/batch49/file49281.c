// fichero 49281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49281;

Registro49281 crear_registro49281(int id) {
    Registro49281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49281(Registro49281 r) {
    return r.valor + r.id;
}
