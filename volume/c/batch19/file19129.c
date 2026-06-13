// fichero 19129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19129;

Registro19129 crear_registro19129(int id) {
    Registro19129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19129(Registro19129 r) {
    return r.valor + r.id;
}
