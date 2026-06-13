// fichero 19981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19981;

Registro19981 crear_registro19981(int id) {
    Registro19981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19981(Registro19981 r) {
    return r.valor + r.id;
}
