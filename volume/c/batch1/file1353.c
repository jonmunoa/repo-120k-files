// fichero 1353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1353;

Registro1353 crear_registro1353(int id) {
    Registro1353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1353(Registro1353 r) {
    return r.valor + r.id;
}
