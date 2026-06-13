// fichero 21737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21737;

Registro21737 crear_registro21737(int id) {
    Registro21737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21737(Registro21737 r) {
    return r.valor + r.id;
}
