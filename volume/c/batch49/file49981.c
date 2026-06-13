// fichero 49981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49981;

Registro49981 crear_registro49981(int id) {
    Registro49981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49981(Registro49981 r) {
    return r.valor + r.id;
}
