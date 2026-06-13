// fichero 21001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21001;

Registro21001 crear_registro21001(int id) {
    Registro21001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21001(Registro21001 r) {
    return r.valor + r.id;
}
