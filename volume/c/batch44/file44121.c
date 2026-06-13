// fichero 44121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44121;

Registro44121 crear_registro44121(int id) {
    Registro44121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44121(Registro44121 r) {
    return r.valor + r.id;
}
