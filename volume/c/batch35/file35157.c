// fichero 35157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35157;

Registro35157 crear_registro35157(int id) {
    Registro35157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35157(Registro35157 r) {
    return r.valor + r.id;
}
