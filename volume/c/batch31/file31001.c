// fichero 31001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31001;

Registro31001 crear_registro31001(int id) {
    Registro31001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31001(Registro31001 r) {
    return r.valor + r.id;
}
