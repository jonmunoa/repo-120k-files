// fichero 49953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49953;

Registro49953 crear_registro49953(int id) {
    Registro49953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49953(Registro49953 r) {
    return r.valor + r.id;
}
