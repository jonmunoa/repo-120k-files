// fichero 3117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3117;

Registro3117 crear_registro3117(int id) {
    Registro3117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3117(Registro3117 r) {
    return r.valor + r.id;
}
