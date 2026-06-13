// fichero 38181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38181;

Registro38181 crear_registro38181(int id) {
    Registro38181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38181(Registro38181 r) {
    return r.valor + r.id;
}
