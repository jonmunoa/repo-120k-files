// fichero 7949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7949;

Registro7949 crear_registro7949(int id) {
    Registro7949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7949(Registro7949 r) {
    return r.valor + r.id;
}
