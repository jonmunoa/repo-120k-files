// fichero 21869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21869;

Registro21869 crear_registro21869(int id) {
    Registro21869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21869(Registro21869 r) {
    return r.valor + r.id;
}
