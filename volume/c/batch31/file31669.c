// fichero 31669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31669;

Registro31669 crear_registro31669(int id) {
    Registro31669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31669(Registro31669 r) {
    return r.valor + r.id;
}
