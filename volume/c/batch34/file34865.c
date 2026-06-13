// fichero 34865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34865;

Registro34865 crear_registro34865(int id) {
    Registro34865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34865(Registro34865 r) {
    return r.valor + r.id;
}
