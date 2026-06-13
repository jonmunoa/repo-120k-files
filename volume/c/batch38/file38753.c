// fichero 38753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38753;

Registro38753 crear_registro38753(int id) {
    Registro38753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38753(Registro38753 r) {
    return r.valor + r.id;
}
