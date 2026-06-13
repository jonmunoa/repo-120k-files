// fichero 30981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30981;

Registro30981 crear_registro30981(int id) {
    Registro30981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30981(Registro30981 r) {
    return r.valor + r.id;
}
