// fichero 8781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8781;

Registro8781 crear_registro8781(int id) {
    Registro8781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8781(Registro8781 r) {
    return r.valor + r.id;
}
