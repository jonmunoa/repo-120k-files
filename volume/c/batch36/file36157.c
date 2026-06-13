// fichero 36157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36157;

Registro36157 crear_registro36157(int id) {
    Registro36157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36157(Registro36157 r) {
    return r.valor + r.id;
}
