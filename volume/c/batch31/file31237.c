// fichero 31237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31237;

Registro31237 crear_registro31237(int id) {
    Registro31237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31237(Registro31237 r) {
    return r.valor + r.id;
}
