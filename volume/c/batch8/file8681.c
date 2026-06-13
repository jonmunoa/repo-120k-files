// fichero 8681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8681;

Registro8681 crear_registro8681(int id) {
    Registro8681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8681(Registro8681 r) {
    return r.valor + r.id;
}
