// fichero 48737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48737;

Registro48737 crear_registro48737(int id) {
    Registro48737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48737(Registro48737 r) {
    return r.valor + r.id;
}
