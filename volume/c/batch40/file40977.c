// fichero 40977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40977;

Registro40977 crear_registro40977(int id) {
    Registro40977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40977(Registro40977 r) {
    return r.valor + r.id;
}
