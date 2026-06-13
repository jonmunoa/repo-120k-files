// fichero 44093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44093;

Registro44093 crear_registro44093(int id) {
    Registro44093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44093(Registro44093 r) {
    return r.valor + r.id;
}
