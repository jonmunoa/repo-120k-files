// fichero 38001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38001;

Registro38001 crear_registro38001(int id) {
    Registro38001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38001(Registro38001 r) {
    return r.valor + r.id;
}
