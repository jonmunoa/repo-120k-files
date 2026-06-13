// fichero 49793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49793;

Registro49793 crear_registro49793(int id) {
    Registro49793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49793(Registro49793 r) {
    return r.valor + r.id;
}
