// fichero 51557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51557;

Registro51557 crear_registro51557(int id) {
    Registro51557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51557(Registro51557 r) {
    return r.valor + r.id;
}
