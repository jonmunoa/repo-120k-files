// fichero 24753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24753;

Registro24753 crear_registro24753(int id) {
    Registro24753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24753(Registro24753 r) {
    return r.valor + r.id;
}
