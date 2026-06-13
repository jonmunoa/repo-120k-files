// fichero 16349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16349;

Registro16349 crear_registro16349(int id) {
    Registro16349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16349(Registro16349 r) {
    return r.valor + r.id;
}
