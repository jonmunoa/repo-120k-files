// fichero 31305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31305;

Registro31305 crear_registro31305(int id) {
    Registro31305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31305(Registro31305 r) {
    return r.valor + r.id;
}
