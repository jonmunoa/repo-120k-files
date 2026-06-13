// fichero 49397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49397;

Registro49397 crear_registro49397(int id) {
    Registro49397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49397(Registro49397 r) {
    return r.valor + r.id;
}
