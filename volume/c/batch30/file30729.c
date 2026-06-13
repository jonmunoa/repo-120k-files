// fichero 30729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30729;

Registro30729 crear_registro30729(int id) {
    Registro30729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30729(Registro30729 r) {
    return r.valor + r.id;
}
