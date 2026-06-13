// fichero 45781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45781;

Registro45781 crear_registro45781(int id) {
    Registro45781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45781(Registro45781 r) {
    return r.valor + r.id;
}
