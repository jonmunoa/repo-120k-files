// fichero 27053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27053;

Registro27053 crear_registro27053(int id) {
    Registro27053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27053(Registro27053 r) {
    return r.valor + r.id;
}
