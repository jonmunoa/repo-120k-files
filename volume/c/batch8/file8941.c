// fichero 8941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8941;

Registro8941 crear_registro8941(int id) {
    Registro8941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8941(Registro8941 r) {
    return r.valor + r.id;
}
