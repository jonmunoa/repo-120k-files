// fichero 17881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17881;

Registro17881 crear_registro17881(int id) {
    Registro17881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17881(Registro17881 r) {
    return r.valor + r.id;
}
