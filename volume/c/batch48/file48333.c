// fichero 48333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48333;

Registro48333 crear_registro48333(int id) {
    Registro48333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48333(Registro48333 r) {
    return r.valor + r.id;
}
