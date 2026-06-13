// fichero 38489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38489;

Registro38489 crear_registro38489(int id) {
    Registro38489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38489(Registro38489 r) {
    return r.valor + r.id;
}
