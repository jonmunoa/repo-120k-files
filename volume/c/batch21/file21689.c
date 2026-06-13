// fichero 21689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21689;

Registro21689 crear_registro21689(int id) {
    Registro21689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21689(Registro21689 r) {
    return r.valor + r.id;
}
