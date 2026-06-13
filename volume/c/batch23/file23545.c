// fichero 23545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23545;

Registro23545 crear_registro23545(int id) {
    Registro23545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23545(Registro23545 r) {
    return r.valor + r.id;
}
