// fichero 50121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50121;

Registro50121 crear_registro50121(int id) {
    Registro50121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50121(Registro50121 r) {
    return r.valor + r.id;
}
