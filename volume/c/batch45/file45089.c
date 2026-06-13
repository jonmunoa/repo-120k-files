// fichero 45089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45089;

Registro45089 crear_registro45089(int id) {
    Registro45089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45089(Registro45089 r) {
    return r.valor + r.id;
}
