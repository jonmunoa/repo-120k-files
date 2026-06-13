// fichero 48681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48681;

Registro48681 crear_registro48681(int id) {
    Registro48681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48681(Registro48681 r) {
    return r.valor + r.id;
}
