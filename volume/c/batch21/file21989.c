// fichero 21989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21989;

Registro21989 crear_registro21989(int id) {
    Registro21989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21989(Registro21989 r) {
    return r.valor + r.id;
}
