// fichero 21397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21397;

Registro21397 crear_registro21397(int id) {
    Registro21397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21397(Registro21397 r) {
    return r.valor + r.id;
}
