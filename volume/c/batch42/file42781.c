// fichero 42781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42781;

Registro42781 crear_registro42781(int id) {
    Registro42781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42781(Registro42781 r) {
    return r.valor + r.id;
}
