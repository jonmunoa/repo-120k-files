// fichero 31913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31913;

Registro31913 crear_registro31913(int id) {
    Registro31913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31913(Registro31913 r) {
    return r.valor + r.id;
}
