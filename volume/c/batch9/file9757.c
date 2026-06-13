// fichero 9757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9757;

Registro9757 crear_registro9757(int id) {
    Registro9757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9757(Registro9757 r) {
    return r.valor + r.id;
}
