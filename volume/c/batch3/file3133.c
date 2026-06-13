// fichero 3133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3133;

Registro3133 crear_registro3133(int id) {
    Registro3133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3133(Registro3133 r) {
    return r.valor + r.id;
}
