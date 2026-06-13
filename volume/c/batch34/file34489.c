// fichero 34489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34489;

Registro34489 crear_registro34489(int id) {
    Registro34489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34489(Registro34489 r) {
    return r.valor + r.id;
}
