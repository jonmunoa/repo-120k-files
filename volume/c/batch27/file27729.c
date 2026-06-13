// fichero 27729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27729;

Registro27729 crear_registro27729(int id) {
    Registro27729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27729(Registro27729 r) {
    return r.valor + r.id;
}
