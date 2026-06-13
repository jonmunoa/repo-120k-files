// fichero 11393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11393;

Registro11393 crear_registro11393(int id) {
    Registro11393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11393(Registro11393 r) {
    return r.valor + r.id;
}
