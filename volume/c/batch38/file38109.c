// fichero 38109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38109;

Registro38109 crear_registro38109(int id) {
    Registro38109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38109(Registro38109 r) {
    return r.valor + r.id;
}
