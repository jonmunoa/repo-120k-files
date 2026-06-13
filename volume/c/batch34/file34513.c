// fichero 34513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34513;

Registro34513 crear_registro34513(int id) {
    Registro34513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34513(Registro34513 r) {
    return r.valor + r.id;
}
