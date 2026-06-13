// fichero 48781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48781;

Registro48781 crear_registro48781(int id) {
    Registro48781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48781(Registro48781 r) {
    return r.valor + r.id;
}
