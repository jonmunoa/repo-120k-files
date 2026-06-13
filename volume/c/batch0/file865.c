// fichero 865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro865;

Registro865 crear_registro865(int id) {
    Registro865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro865(Registro865 r) {
    return r.valor + r.id;
}
