// fichero 50681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50681;

Registro50681 crear_registro50681(int id) {
    Registro50681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50681(Registro50681 r) {
    return r.valor + r.id;
}
