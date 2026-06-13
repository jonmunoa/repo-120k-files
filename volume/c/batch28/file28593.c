// fichero 28593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28593;

Registro28593 crear_registro28593(int id) {
    Registro28593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28593(Registro28593 r) {
    return r.valor + r.id;
}
