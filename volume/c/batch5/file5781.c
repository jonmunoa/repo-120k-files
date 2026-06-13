// fichero 5781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5781;

Registro5781 crear_registro5781(int id) {
    Registro5781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5781(Registro5781 r) {
    return r.valor + r.id;
}
