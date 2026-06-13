// fichero 20681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20681;

Registro20681 crear_registro20681(int id) {
    Registro20681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20681(Registro20681 r) {
    return r.valor + r.id;
}
