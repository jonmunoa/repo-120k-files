// fichero 47681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47681;

Registro47681 crear_registro47681(int id) {
    Registro47681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47681(Registro47681 r) {
    return r.valor + r.id;
}
