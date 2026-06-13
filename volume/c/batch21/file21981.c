// fichero 21981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21981;

Registro21981 crear_registro21981(int id) {
    Registro21981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21981(Registro21981 r) {
    return r.valor + r.id;
}
