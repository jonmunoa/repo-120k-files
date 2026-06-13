// fichero 18977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18977;

Registro18977 crear_registro18977(int id) {
    Registro18977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18977(Registro18977 r) {
    return r.valor + r.id;
}
