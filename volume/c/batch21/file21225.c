// fichero 21225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21225;

Registro21225 crear_registro21225(int id) {
    Registro21225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21225(Registro21225 r) {
    return r.valor + r.id;
}
