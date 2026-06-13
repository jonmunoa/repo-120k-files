// fichero 21941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21941;

Registro21941 crear_registro21941(int id) {
    Registro21941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21941(Registro21941 r) {
    return r.valor + r.id;
}
