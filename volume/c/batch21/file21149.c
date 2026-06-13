// fichero 21149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21149;

Registro21149 crear_registro21149(int id) {
    Registro21149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21149(Registro21149 r) {
    return r.valor + r.id;
}
