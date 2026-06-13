// fichero 38121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38121;

Registro38121 crear_registro38121(int id) {
    Registro38121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38121(Registro38121 r) {
    return r.valor + r.id;
}
