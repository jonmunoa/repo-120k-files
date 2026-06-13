// fichero 21789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21789;

Registro21789 crear_registro21789(int id) {
    Registro21789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21789(Registro21789 r) {
    return r.valor + r.id;
}
