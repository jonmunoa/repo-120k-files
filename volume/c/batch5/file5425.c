// fichero 5425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5425;

Registro5425 crear_registro5425(int id) {
    Registro5425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5425(Registro5425 r) {
    return r.valor + r.id;
}
