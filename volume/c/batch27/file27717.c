// fichero 27717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27717;

Registro27717 crear_registro27717(int id) {
    Registro27717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27717(Registro27717 r) {
    return r.valor + r.id;
}
