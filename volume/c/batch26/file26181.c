// fichero 26181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26181;

Registro26181 crear_registro26181(int id) {
    Registro26181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26181(Registro26181 r) {
    return r.valor + r.id;
}
