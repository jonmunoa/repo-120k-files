// fichero 35681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35681;

Registro35681 crear_registro35681(int id) {
    Registro35681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35681(Registro35681 r) {
    return r.valor + r.id;
}
