// fichero 52917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52917;

Registro52917 crear_registro52917(int id) {
    Registro52917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52917(Registro52917 r) {
    return r.valor + r.id;
}
