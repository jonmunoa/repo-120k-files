// fichero 31981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31981;

Registro31981 crear_registro31981(int id) {
    Registro31981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31981(Registro31981 r) {
    return r.valor + r.id;
}
