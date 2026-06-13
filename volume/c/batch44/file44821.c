// fichero 44821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44821;

Registro44821 crear_registro44821(int id) {
    Registro44821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44821(Registro44821 r) {
    return r.valor + r.id;
}
