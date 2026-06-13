// fichero 45893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45893;

Registro45893 crear_registro45893(int id) {
    Registro45893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45893(Registro45893 r) {
    return r.valor + r.id;
}
