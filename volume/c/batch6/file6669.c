// fichero 6669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6669;

Registro6669 crear_registro6669(int id) {
    Registro6669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6669(Registro6669 r) {
    return r.valor + r.id;
}
