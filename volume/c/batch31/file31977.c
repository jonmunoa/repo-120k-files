// fichero 31977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31977;

Registro31977 crear_registro31977(int id) {
    Registro31977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31977(Registro31977 r) {
    return r.valor + r.id;
}
