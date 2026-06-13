// fichero 17993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17993;

Registro17993 crear_registro17993(int id) {
    Registro17993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17993(Registro17993 r) {
    return r.valor + r.id;
}
