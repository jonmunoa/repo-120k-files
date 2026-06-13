// fichero 27781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27781;

Registro27781 crear_registro27781(int id) {
    Registro27781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27781(Registro27781 r) {
    return r.valor + r.id;
}
