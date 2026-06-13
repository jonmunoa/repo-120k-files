// fichero 29781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29781;

Registro29781 crear_registro29781(int id) {
    Registro29781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29781(Registro29781 r) {
    return r.valor + r.id;
}
