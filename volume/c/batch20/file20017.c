// fichero 20017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20017;

Registro20017 crear_registro20017(int id) {
    Registro20017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20017(Registro20017 r) {
    return r.valor + r.id;
}
