// fichero 3121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3121;

Registro3121 crear_registro3121(int id) {
    Registro3121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3121(Registro3121 r) {
    return r.valor + r.id;
}
