// fichero 45805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45805;

Registro45805 crear_registro45805(int id) {
    Registro45805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45805(Registro45805 r) {
    return r.valor + r.id;
}
