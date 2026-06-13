// fichero 44193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44193;

Registro44193 crear_registro44193(int id) {
    Registro44193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44193(Registro44193 r) {
    return r.valor + r.id;
}
