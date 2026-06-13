// fichero 37417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37417;

Registro37417 crear_registro37417(int id) {
    Registro37417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37417(Registro37417 r) {
    return r.valor + r.id;
}
