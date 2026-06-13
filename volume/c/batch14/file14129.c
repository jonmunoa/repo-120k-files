// fichero 14129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14129;

Registro14129 crear_registro14129(int id) {
    Registro14129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14129(Registro14129 r) {
    return r.valor + r.id;
}
