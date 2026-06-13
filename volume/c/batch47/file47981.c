// fichero 47981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47981;

Registro47981 crear_registro47981(int id) {
    Registro47981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47981(Registro47981 r) {
    return r.valor + r.id;
}
