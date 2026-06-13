// fichero 9501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9501;

Registro9501 crear_registro9501(int id) {
    Registro9501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9501(Registro9501 r) {
    return r.valor + r.id;
}
