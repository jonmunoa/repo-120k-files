// fichero 21109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21109;

Registro21109 crear_registro21109(int id) {
    Registro21109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21109(Registro21109 r) {
    return r.valor + r.id;
}
