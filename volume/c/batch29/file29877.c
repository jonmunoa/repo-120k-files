// fichero 29877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29877;

Registro29877 crear_registro29877(int id) {
    Registro29877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29877(Registro29877 r) {
    return r.valor + r.id;
}
