// fichero 36977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36977;

Registro36977 crear_registro36977(int id) {
    Registro36977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36977(Registro36977 r) {
    return r.valor + r.id;
}
