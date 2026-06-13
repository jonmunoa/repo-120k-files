// fichero 44393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44393;

Registro44393 crear_registro44393(int id) {
    Registro44393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44393(Registro44393 r) {
    return r.valor + r.id;
}
