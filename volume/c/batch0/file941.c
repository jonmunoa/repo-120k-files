// fichero 941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro941;

Registro941 crear_registro941(int id) {
    Registro941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro941(Registro941 r) {
    return r.valor + r.id;
}
