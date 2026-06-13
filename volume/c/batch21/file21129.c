// fichero 21129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21129;

Registro21129 crear_registro21129(int id) {
    Registro21129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21129(Registro21129 r) {
    return r.valor + r.id;
}
