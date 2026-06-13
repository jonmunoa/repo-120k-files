// fichero 19157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19157;

Registro19157 crear_registro19157(int id) {
    Registro19157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19157(Registro19157 r) {
    return r.valor + r.id;
}
