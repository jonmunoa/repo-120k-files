// fichero 19977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19977;

Registro19977 crear_registro19977(int id) {
    Registro19977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19977(Registro19977 r) {
    return r.valor + r.id;
}
