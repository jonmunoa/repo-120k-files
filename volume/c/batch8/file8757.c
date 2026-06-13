// fichero 8757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8757;

Registro8757 crear_registro8757(int id) {
    Registro8757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8757(Registro8757 r) {
    return r.valor + r.id;
}
