// fichero 27085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27085;

Registro27085 crear_registro27085(int id) {
    Registro27085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27085(Registro27085 r) {
    return r.valor + r.id;
}
