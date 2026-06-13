// fichero 20181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20181;

Registro20181 crear_registro20181(int id) {
    Registro20181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20181(Registro20181 r) {
    return r.valor + r.id;
}
