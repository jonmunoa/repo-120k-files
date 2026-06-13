// fichero 26081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26081;

Registro26081 crear_registro26081(int id) {
    Registro26081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26081(Registro26081 r) {
    return r.valor + r.id;
}
