// fichero 21445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21445;

Registro21445 crear_registro21445(int id) {
    Registro21445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21445(Registro21445 r) {
    return r.valor + r.id;
}
