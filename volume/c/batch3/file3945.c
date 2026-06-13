// fichero 3945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3945;

Registro3945 crear_registro3945(int id) {
    Registro3945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3945(Registro3945 r) {
    return r.valor + r.id;
}
