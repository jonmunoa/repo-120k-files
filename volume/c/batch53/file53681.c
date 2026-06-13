// fichero 53681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53681;

Registro53681 crear_registro53681(int id) {
    Registro53681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53681(Registro53681 r) {
    return r.valor + r.id;
}
