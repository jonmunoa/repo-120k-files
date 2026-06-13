// fichero 45505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45505;

Registro45505 crear_registro45505(int id) {
    Registro45505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45505(Registro45505 r) {
    return r.valor + r.id;
}
