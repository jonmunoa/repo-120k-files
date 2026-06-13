// fichero 38865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38865;

Registro38865 crear_registro38865(int id) {
    Registro38865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38865(Registro38865 r) {
    return r.valor + r.id;
}
