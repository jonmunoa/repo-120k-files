// fichero 31081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31081;

Registro31081 crear_registro31081(int id) {
    Registro31081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31081(Registro31081 r) {
    return r.valor + r.id;
}
