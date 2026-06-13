// fichero 38941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38941;

Registro38941 crear_registro38941(int id) {
    Registro38941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38941(Registro38941 r) {
    return r.valor + r.id;
}
