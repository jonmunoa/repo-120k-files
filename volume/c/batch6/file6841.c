// fichero 6841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6841;

Registro6841 crear_registro6841(int id) {
    Registro6841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6841(Registro6841 r) {
    return r.valor + r.id;
}
