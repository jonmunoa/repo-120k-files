// fichero 35977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35977;

Registro35977 crear_registro35977(int id) {
    Registro35977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35977(Registro35977 r) {
    return r.valor + r.id;
}
