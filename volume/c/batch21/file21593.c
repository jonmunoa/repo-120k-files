// fichero 21593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21593;

Registro21593 crear_registro21593(int id) {
    Registro21593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21593(Registro21593 r) {
    return r.valor + r.id;
}
