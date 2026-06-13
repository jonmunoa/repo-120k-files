// fichero 39681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39681;

Registro39681 crear_registro39681(int id) {
    Registro39681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39681(Registro39681 r) {
    return r.valor + r.id;
}
