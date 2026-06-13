// fichero 12121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12121;

Registro12121 crear_registro12121(int id) {
    Registro12121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12121(Registro12121 r) {
    return r.valor + r.id;
}
