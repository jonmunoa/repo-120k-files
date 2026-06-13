// fichero 31029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31029;

Registro31029 crear_registro31029(int id) {
    Registro31029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31029(Registro31029 r) {
    return r.valor + r.id;
}
