// fichero 7869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7869;

Registro7869 crear_registro7869(int id) {
    Registro7869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7869(Registro7869 r) {
    return r.valor + r.id;
}
