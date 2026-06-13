// fichero 38521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38521;

Registro38521 crear_registro38521(int id) {
    Registro38521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38521(Registro38521 r) {
    return r.valor + r.id;
}
