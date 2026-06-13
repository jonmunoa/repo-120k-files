// fichero 19609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19609;

Registro19609 crear_registro19609(int id) {
    Registro19609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19609(Registro19609 r) {
    return r.valor + r.id;
}
