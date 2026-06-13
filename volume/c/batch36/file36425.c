// fichero 36425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36425;

Registro36425 crear_registro36425(int id) {
    Registro36425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36425(Registro36425 r) {
    return r.valor + r.id;
}
