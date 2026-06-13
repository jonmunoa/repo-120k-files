// fichero 36949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36949;

Registro36949 crear_registro36949(int id) {
    Registro36949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36949(Registro36949 r) {
    return r.valor + r.id;
}
