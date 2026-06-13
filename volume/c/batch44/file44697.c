// fichero 44697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44697;

Registro44697 crear_registro44697(int id) {
    Registro44697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44697(Registro44697 r) {
    return r.valor + r.id;
}
