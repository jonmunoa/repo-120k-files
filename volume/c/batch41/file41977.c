// fichero 41977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41977;

Registro41977 crear_registro41977(int id) {
    Registro41977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41977(Registro41977 r) {
    return r.valor + r.id;
}
