// fichero 5977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5977;

Registro5977 crear_registro5977(int id) {
    Registro5977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5977(Registro5977 r) {
    return r.valor + r.id;
}
