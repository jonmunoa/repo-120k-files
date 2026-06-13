// fichero 27817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27817;

Registro27817 crear_registro27817(int id) {
    Registro27817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27817(Registro27817 r) {
    return r.valor + r.id;
}
