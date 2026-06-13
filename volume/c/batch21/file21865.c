// fichero 21865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21865;

Registro21865 crear_registro21865(int id) {
    Registro21865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21865(Registro21865 r) {
    return r.valor + r.id;
}
