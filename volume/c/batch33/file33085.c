// fichero 33085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33085;

Registro33085 crear_registro33085(int id) {
    Registro33085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33085(Registro33085 r) {
    return r.valor + r.id;
}
