// fichero 44961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44961;

Registro44961 crear_registro44961(int id) {
    Registro44961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44961(Registro44961 r) {
    return r.valor + r.id;
}
