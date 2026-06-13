// fichero 24865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24865;

Registro24865 crear_registro24865(int id) {
    Registro24865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24865(Registro24865 r) {
    return r.valor + r.id;
}
