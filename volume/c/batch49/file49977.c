// fichero 49977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49977;

Registro49977 crear_registro49977(int id) {
    Registro49977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49977(Registro49977 r) {
    return r.valor + r.id;
}
