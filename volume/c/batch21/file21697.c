// fichero 21697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21697;

Registro21697 crear_registro21697(int id) {
    Registro21697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21697(Registro21697 r) {
    return r.valor + r.id;
}
