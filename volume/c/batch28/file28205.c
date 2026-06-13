// fichero 28205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28205;

Registro28205 crear_registro28205(int id) {
    Registro28205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28205(Registro28205 r) {
    return r.valor + r.id;
}
