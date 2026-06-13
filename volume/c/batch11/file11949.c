// fichero 11949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11949;

Registro11949 crear_registro11949(int id) {
    Registro11949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11949(Registro11949 r) {
    return r.valor + r.id;
}
