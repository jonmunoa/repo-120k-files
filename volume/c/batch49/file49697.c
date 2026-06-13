// fichero 49697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49697;

Registro49697 crear_registro49697(int id) {
    Registro49697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49697(Registro49697 r) {
    return r.valor + r.id;
}
