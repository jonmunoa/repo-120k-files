// fichero 49521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49521;

Registro49521 crear_registro49521(int id) {
    Registro49521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49521(Registro49521 r) {
    return r.valor + r.id;
}
