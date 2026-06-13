// fichero 17917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17917;

Registro17917 crear_registro17917(int id) {
    Registro17917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17917(Registro17917 r) {
    return r.valor + r.id;
}
