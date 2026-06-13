// fichero 21681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21681;

Registro21681 crear_registro21681(int id) {
    Registro21681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21681(Registro21681 r) {
    return r.valor + r.id;
}
