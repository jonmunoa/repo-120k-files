// fichero 11129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11129;

Registro11129 crear_registro11129(int id) {
    Registro11129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11129(Registro11129 r) {
    return r.valor + r.id;
}
