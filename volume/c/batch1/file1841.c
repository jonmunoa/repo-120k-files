// fichero 1841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1841;

Registro1841 crear_registro1841(int id) {
    Registro1841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1841(Registro1841 r) {
    return r.valor + r.id;
}
