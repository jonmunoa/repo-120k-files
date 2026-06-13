// fichero 7137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7137;

Registro7137 crear_registro7137(int id) {
    Registro7137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7137(Registro7137 r) {
    return r.valor + r.id;
}
