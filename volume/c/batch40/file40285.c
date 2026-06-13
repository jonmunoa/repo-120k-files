// fichero 40285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40285;

Registro40285 crear_registro40285(int id) {
    Registro40285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40285(Registro40285 r) {
    return r.valor + r.id;
}
