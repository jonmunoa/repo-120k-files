// fichero 21417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21417;

Registro21417 crear_registro21417(int id) {
    Registro21417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21417(Registro21417 r) {
    return r.valor + r.id;
}
