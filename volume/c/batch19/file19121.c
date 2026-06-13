// fichero 19121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19121;

Registro19121 crear_registro19121(int id) {
    Registro19121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19121(Registro19121 r) {
    return r.valor + r.id;
}
