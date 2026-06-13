// fichero 31221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31221;

Registro31221 crear_registro31221(int id) {
    Registro31221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31221(Registro31221 r) {
    return r.valor + r.id;
}
