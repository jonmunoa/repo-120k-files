// fichero 45785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45785;

Registro45785 crear_registro45785(int id) {
    Registro45785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45785(Registro45785 r) {
    return r.valor + r.id;
}
