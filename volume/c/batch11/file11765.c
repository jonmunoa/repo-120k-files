// fichero 11765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11765;

Registro11765 crear_registro11765(int id) {
    Registro11765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11765(Registro11765 r) {
    return r.valor + r.id;
}
