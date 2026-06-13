// fichero 52273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52273;

Registro52273 crear_registro52273(int id) {
    Registro52273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52273(Registro52273 r) {
    return r.valor + r.id;
}
