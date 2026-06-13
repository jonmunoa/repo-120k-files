// fichero 44869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44869;

Registro44869 crear_registro44869(int id) {
    Registro44869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44869(Registro44869 r) {
    return r.valor + r.id;
}
