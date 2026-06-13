// fichero 28161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28161;

Registro28161 crear_registro28161(int id) {
    Registro28161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28161(Registro28161 r) {
    return r.valor + r.id;
}
