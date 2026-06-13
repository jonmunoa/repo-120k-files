// fichero 36021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36021;

Registro36021 crear_registro36021(int id) {
    Registro36021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36021(Registro36021 r) {
    return r.valor + r.id;
}
