// fichero 44265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44265;

Registro44265 crear_registro44265(int id) {
    Registro44265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44265(Registro44265 r) {
    return r.valor + r.id;
}
