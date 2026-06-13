// fichero 44369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44369;

Registro44369 crear_registro44369(int id) {
    Registro44369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44369(Registro44369 r) {
    return r.valor + r.id;
}
