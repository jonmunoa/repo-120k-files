// fichero 8061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8061;

Registro8061 crear_registro8061(int id) {
    Registro8061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8061(Registro8061 r) {
    return r.valor + r.id;
}
