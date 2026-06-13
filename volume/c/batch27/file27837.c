// fichero 27837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27837;

Registro27837 crear_registro27837(int id) {
    Registro27837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27837(Registro27837 r) {
    return r.valor + r.id;
}
