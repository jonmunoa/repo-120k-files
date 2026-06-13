// fichero 14505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14505;

Registro14505 crear_registro14505(int id) {
    Registro14505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14505(Registro14505 r) {
    return r.valor + r.id;
}
