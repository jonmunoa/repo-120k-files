// fichero 52681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52681;

Registro52681 crear_registro52681(int id) {
    Registro52681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52681(Registro52681 r) {
    return r.valor + r.id;
}
