// fichero 47121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47121;

Registro47121 crear_registro47121(int id) {
    Registro47121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47121(Registro47121 r) {
    return r.valor + r.id;
}
