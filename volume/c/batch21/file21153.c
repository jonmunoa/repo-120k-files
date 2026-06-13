// fichero 21153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21153;

Registro21153 crear_registro21153(int id) {
    Registro21153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21153(Registro21153 r) {
    return r.valor + r.id;
}
