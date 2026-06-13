// fichero 39425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39425;

Registro39425 crear_registro39425(int id) {
    Registro39425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39425(Registro39425 r) {
    return r.valor + r.id;
}
