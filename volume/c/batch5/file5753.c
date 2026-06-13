// fichero 5753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5753;

Registro5753 crear_registro5753(int id) {
    Registro5753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5753(Registro5753 r) {
    return r.valor + r.id;
}
