// fichero 8417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8417;

Registro8417 crear_registro8417(int id) {
    Registro8417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8417(Registro8417 r) {
    return r.valor + r.id;
}
