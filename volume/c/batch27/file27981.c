// fichero 27981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27981;

Registro27981 crear_registro27981(int id) {
    Registro27981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27981(Registro27981 r) {
    return r.valor + r.id;
}
