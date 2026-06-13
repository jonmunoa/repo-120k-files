// fichero 38793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38793;

Registro38793 crear_registro38793(int id) {
    Registro38793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38793(Registro38793 r) {
    return r.valor + r.id;
}
