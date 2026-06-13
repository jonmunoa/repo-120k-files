// fichero 11333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11333;

Registro11333 crear_registro11333(int id) {
    Registro11333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11333(Registro11333 r) {
    return r.valor + r.id;
}
