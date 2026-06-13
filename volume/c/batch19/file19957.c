// fichero 19957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19957;

Registro19957 crear_registro19957(int id) {
    Registro19957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19957(Registro19957 r) {
    return r.valor + r.id;
}
