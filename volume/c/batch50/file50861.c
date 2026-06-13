// fichero 50861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50861;

Registro50861 crear_registro50861(int id) {
    Registro50861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50861(Registro50861 r) {
    return r.valor + r.id;
}
