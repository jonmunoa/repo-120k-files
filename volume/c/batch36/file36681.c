// fichero 36681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36681;

Registro36681 crear_registro36681(int id) {
    Registro36681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36681(Registro36681 r) {
    return r.valor + r.id;
}
