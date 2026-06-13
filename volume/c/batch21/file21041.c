// fichero 21041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21041;

Registro21041 crear_registro21041(int id) {
    Registro21041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21041(Registro21041 r) {
    return r.valor + r.id;
}
