// fichero 31333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31333;

Registro31333 crear_registro31333(int id) {
    Registro31333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31333(Registro31333 r) {
    return r.valor + r.id;
}
